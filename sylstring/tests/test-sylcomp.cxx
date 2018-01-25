#include "sylstring/sylcomp.h"

#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

bool
testInitConstClass()
{
    static const vector<char32_t> midConst = {
        U'\u0e01', // ก
        U'\u0e08', // จ
        U'\u0e0e', // ฎ
        U'\u0e0f', // ฏ
        U'\u0e14', // ด
        U'\u0e15', // ต
        U'\u0e1a', // บ
        U'\u0e1b', // ป
        U'\u0e2d', // อ
    };

    static const vector<char32_t> highConst = {
        U'\u0e02', // ข
        U'\u0e03', // ฃ
        U'\u0e09', // ฉ
        U'\u0e10', // ฐ
        U'\u0e16', // ถ
        U'\u0e1c', // ผ
        U'\u0e1d', // ฝ
        U'\u0e28', // ศ
        U'\u0e29', // ษ
        U'\u0e2a', // ส
        U'\u0e2b', // ห
    };

    static const vector<char32_t> singleLowConst = {
        U'\u0e07', // ง
        U'\u0e0d', // ญ
        U'\u0e13', // ณ
        U'\u0e19', // น
        U'\u0e21', // ม
        U'\u0e22', // ย
        U'\u0e23', // ร
        U'\u0e25', // ล
        U'\u0e27', // ว
    };

    static const vector<char32_t> pairedLowConst = {
        U'\u0e04', // ค
        U'\u0e05', // ฅ
        U'\u0e06', // ฆ
        U'\u0e0a', // ช
        U'\u0e0b', // ซ
        U'\u0e0c', // ฌ
        U'\u0e11', // ฑ
        U'\u0e12', // ฒ
        U'\u0e17', // ท
        U'\u0e18', // ธ
        U'\u0e1e', // พ
        U'\u0e1f', // ฟ
        U'\u0e20', // ภ
        U'\u0e2e', // ฮ
    };

    bool isSuccess = true;

    for (auto c : midConst) {
        if (EInitConstClass::MID != InitConstClass (c)) {
            cerr << "Wrong class for init const '"
                 << setw (4) << hex << static_cast<char16_t> (c)
                 << "'" << endl;
            isSuccess = false;
        }
    }

    for (auto c : highConst) {
        if (EInitConstClass::HIGH != InitConstClass (c)) {
            cerr << "Wrong class for init const '"
                 << setw (4) << hex << static_cast<char16_t> (c)
                 << "'" << endl;
            isSuccess = false;
        }
    }

    for (auto c : singleLowConst) {
        if (EInitConstClass::LOWS != InitConstClass (c)) {
            cerr << "Wrong class for init const '"
                 << setw (4) << hex << static_cast<char16_t> (c)
                 << "'" << endl;
            isSuccess = false;
        }
    }

    for (auto c : pairedLowConst) {
        if (EInitConstClass::LOWP != InitConstClass (c)) {
            cerr << "Wrong class for init const '"
                 << setw (4) << hex << static_cast<char16_t> (c)
                 << "'" << endl;
            isSuccess = false;
        }
    }

    return isSuccess;
}

bool
testEndConstClass()
{
    static const vector<char32_t> kokaConst = {
        U'\u0e2b', // ห
        U'\u0e2d', // อ
        U'\u0e2e', // ฮ
    };
    static const vector<char32_t> kokConst = {
        U'\u0e01', // ก
        U'\u0e02', // ข
        U'\u0e03', // ฃ
        U'\u0e04', // ค
        U'\u0e05', // ฅ
        U'\u0e06', // ฆ
    };

    static const vector<char32_t> kongConst = {
        U'\u0e07', // ง
    };

    static const vector<char32_t> kotConst = {
        U'\u0e08', // จ
        U'\u0e09', // ฉ
        U'\u0e0a', // ช
        U'\u0e0b', // ซ
        U'\u0e0c', // ฌ
        U'\u0e0e', // ฎ
        U'\u0e0f', // ฏ
        U'\u0e10', // ฐ
        U'\u0e11', // ฑ
        U'\u0e12', // ฒ
        U'\u0e14', // ด
        U'\u0e15', // ต
        U'\u0e16', // ถ
        U'\u0e17', // ท
        U'\u0e18', // ธ
        U'\u0e28', // ศ
        U'\u0e29', // ษ
        U'\u0e2a', // ส
    };

    static const vector<char32_t> konConst = {
        U'\u0e0d', // ญ
        U'\u0e13', // ณ
        U'\u0e19', // น
        U'\u0e23', // ร
        U'\u0e25', // ล
        U'\u0e2c', // ฬ
    };

    static const vector<char32_t> kopConst = {
        U'\u0e1a', // บ
        U'\u0e1b', // ป
        U'\u0e1c', // ผ
        U'\u0e1d', // ฝ
        U'\u0e1e', // พ
        U'\u0e1f', // ฟ
        U'\u0e20', // ภ
    };

    static const vector<char32_t> komConst = {
        U'\u0e21', // ม
    };

    static const vector<char32_t> koeyConst = {
        U'\u0e22', // ย
    };

    static const vector<char32_t> koewConst = {
        U'\u0e27', // ว
    };

    bool isSuccess = true;

    for (auto c : kokaConst) {
        if (EEndConstClass::NONE != EndConstClass (c)) {
            cerr << "Wrong class for end const '"
                 << setw (4) << hex << static_cast<char16_t> (c)
                 << "'" << endl;
            isSuccess = false;
        }
    }

    for (auto c : kokConst) {
        if (EEndConstClass::KOK != EndConstClass (c)) {
            cerr << "Wrong class for end const '"
                 << setw (4) << hex << static_cast<char16_t> (c)
                 << "'" << endl;
            isSuccess = false;
        }
    }

    for (auto c : kongConst) {
        if (EEndConstClass::KONG != EndConstClass (c)) {
            cerr << "Wrong class for end const '"
                 << setw (4) << hex << static_cast<char16_t> (c)
                 << "'" << endl;
            isSuccess = false;
        }
    }

    for (auto c : kotConst) {
        if (EEndConstClass::KOT != EndConstClass (c)) {
            cerr << "Wrong class for end const '"
                 << setw (4) << hex << static_cast<char16_t> (c)
                 << "'" << endl;
            isSuccess = false;
        }
    }

    for (auto c : konConst) {
        if (EEndConstClass::KON != EndConstClass (c)) {
            cerr << "Wrong class for end const '"
                 << setw (4) << hex << static_cast<char16_t> (c)
                 << "'" << endl;
            isSuccess = false;
        }
    }

    for (auto c : kopConst) {
        if (EEndConstClass::KOP != EndConstClass (c)) {
            cerr << "Wrong class for end const '"
                 << setw (4) << hex << static_cast<char16_t> (c)
                 << "'" << endl;
            isSuccess = false;
        }
    }

    for (auto c : komConst) {
        if (EEndConstClass::KOM != EndConstClass (c)) {
            cerr << "Wrong class for end const '"
                 << setw (4) << hex << static_cast<char16_t> (c)
                 << "'" << endl;
            isSuccess = false;
        }
    }

    for (auto c : koeyConst) {
        if (EEndConstClass::KOEY != EndConstClass (c)) {
            cerr << "Wrong class for end const '"
                 << setw (4) << hex << static_cast<char16_t> (c)
                 << "'" << endl;
            isSuccess = false;
        }
    }

    for (auto c : koewConst) {
        if (EEndConstClass::KOEW != EndConstClass (c)) {
            cerr << "Wrong class for end const '"
                 << setw (4) << hex << static_cast<char16_t> (c)
                 << "'" << endl;
            isSuccess = false;
        }
    }

    return isSuccess;
}

int
main()
{
    cout << "Testing InitConstClass() ... ";
    if (testInitConstClass()) {
        cout << "[OK]" << endl;
    } else {
        cout << "[FAIL]" << endl;
    }

    cout << "Testing EndConstClass() ... ";
    if (testEndConstClass()) {
        cout << "[OK]" << endl;
    } else {
        cout << "[FAIL]" << endl;
    }

    return 0;
}

/*
vi:ts=4:ai:expandtab
*/