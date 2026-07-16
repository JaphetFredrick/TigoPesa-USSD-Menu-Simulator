#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main() {
    string ussdCode;
    cin >> ussdCode;
    system("cls");

    if (ussdCode != "*150*01#") {
        cout << "MMI code error, Please enter *150*01# and Try again.";
        return 0;
    }
    home:
    cout << "TigoPesa" << endl;
    cout << "1. Tuma pesa" << endl;
    cout << "2. Vocha na vifulushi" << endl;
    cout << "3. Kutoa pesa" << endl;
    cout << "4. Lipa bili" << endl;
    cout << "5. Lipa kwa simu" << endl;
    cout << "6. Jihudumie(Akaunti na Salio)" << endl;
    cout << "7. Huduma za kifedha" << endl;
    cout << "8. Language" << endl;
    cout << "9. OFA" << endl;

    int mainChoice;
    cin >> mainChoice;
    system("cls");

    switch (mainChoice) {

    // ============================================================
    // 1. TUMA PESA
    // ============================================================
    case 1: {
        cout << "1. Kwa namba ya simu" << endl;
        cout << "2. Tuma naya kutolea" << endl;
        cout << "3. Mitandao mingine" << endl;
        cout << "4. Tuma njee ya nchi" << endl;
        cout << "5. Kama vocha" << endl;
        cout << "#. Rudi menu kuu" << endl;

        int choice;
        cin >> choice;
        system("cls");

        switch (choice) {
            // Kwa namba ya simu
            case 1: {
                cout << "Ingiza namba ya simu ya mpokeaji" << endl;
                long long phone;
                cin >> phone;
                system("cls");

                if (phone >= 710000000 && phone <= 729999999) {
                    cout << "Ingiza kiasi cha pesa kwanzia Tsh 100\n";
                    int amount;
                    cin >> amount;
                    system("cls");

                    cout << "Ingiza namba ya siri\n";
                    int pin;
                    cin >> pin;
                    system("cls");

                    if (pin > 1000 && pin < 3000) {
                        cout << "Umetuma shilingi " << amount
                            << " kwenda kwenye namba ya simu" << '+' << 255 << phone << endl;
                    } else {
                        cout << "namba ya siri ulio ingiza sio sahihi" << endl;
                    }
                } else {
                    cout << "Namba ya simu ulioingiza sio sahihi";
                }
                break;
            }
            // Tuma naya kutolea 
            case 2: {
                cout << "Tuma naya kutolea" << endl;
                int amount;
                cin >> amount;
                system("cls");

                cout << "Ingiza namba ya simu ya mpokeaji" << endl;
                long long phone;
                cin >> phone;
                system("cls");

                if (phone >= 710000000 && phone <= 729999999) {
                    cout << "Ingiza kiasi cha pesa kuanzia Tsh 100\n" << endl;
                    int voucherAmount;
                    cin >> voucherAmount;
                    system("cls");

                    cout << "Ingiza namba ya siri\n" << endl;
                    int pin;
                    cin >> pin;
                    system("cls");

                    cout << "Umetuma shilingi " << amount
                        << " kwenda kwenye namba" << '+' << 255 << phone << endl;
                } else {
                    cout << "Namba hiyo haipo\n";
                }
                break;
            }
            // Kwenda Mitandao mingine
            case 3: {
                cout << "Chagua Mtandao" << endl;
                cout << "1. Airtel" << endl;
                cout << "2. M-Pesa" << endl;
                cout << "3. HaloPesa" << endl;

                int network;
                cin >> network;
                system("cls");

                switch (network) {
                case 1: {
                    cout << "Ingiza namba ya Airtel" << endl;
                    long long phone;
                    cin >> phone;
                    system("cls");

                    if (phone >= 620000000 && phone <= 689999999) {
                        cout << "Ingiza kiasi kuanzia Tsh 100\n" << endl;
                        int amount;
                        cin >> amount;
                        system("cls");

                        cout << "Ingiza namba ya siri" << endl;
                        int pin;
                        cin >> pin;
                        system("cls");

                        cout << "Umetume shilingi " << amount
                            << " kwenda kwenye namba" << '+' << 255 << phone << endl;
                    } else {
                        cout << "Ndugu Mteja, Huwezi kufanya muamala huu "
                            << "Tafadhali wasiliana na huduma kwa Mteja kwa maelezo zaidi.";
                    }
                    break;
                }
                case 2: {
                    cout << "Ingiza namba sahihi ilikuendelea" << endl;
                    long long phone;
                    cin >> phone;
                    system("cls");

                    if (phone >= 740000000 && phone <= 769999999) {
                        cout << "ingiza kiasi kuanzia Tsh 100\n" << endl;
                        int amount;
                        cin >> amount;
                        system("cls");

                        cout << "Umekalibia kutuma Tsh " << amount
                            << " kwenda kwenye namba ya simu " << '+' << 255 << phone
                            << " .Ingiza namba ya siri" << endl;
                        int pin;
                        cin >> pin;
                        system("cls");

                        cout << "Imesibitishwa umetuma Tsh " << amount
                            << " kwenda kwenye namba " << '+' << 255 << phone << endl;
                    } else {
                        cout << "Ndugu Mteja, Huwezi kufanya muamala huu "
                            << "Tafadhali wasiliana na huduma kwa Mteja kwa maelezo zaidi." << endl;
                    }
                    break;
                }
                case 3: {
                    cout << "Ingiza namba ya Halotel" << endl;
                    long long phone;
                    cin >> phone;
                    system("cls");

                    if (phone >= 620000000) {
                        cout << "Ingiza kiasi kuanzia Tsh 100\n" << endl;
                        int amount;
                        cin >> amount;
                        system("cls");

                        cout << "Ingiza neno siri" << endl;
                        int pin;
                        cin >> pin;
                        system("cls");

                        cout << "Umetuma Tsh " << amount << " kwenda namba ya simu" << phone << endl;
                    } else {
                        cout << "Namba uliyo ingiza sio sahihi Tafadhali jaribu tena" << endl;
                    }
                    break;
                }
                default:
                    cout << "Chaguo sio sahihi";
                }
                break;
            }
            // Kwenda njee ya nchi
            case 4: {
                cout << "Chagua Inchi" << endl;
                cout << "1. RWANDA" << endl;
                cout << "2. UGANDA" << endl;
                cout << "3. KENYA" << endl;
                cout << "4. BURUNDI" << endl;
                cout << "5. SUDAN KUSINI" << endl;

                int country;
                cin >> country;
                system("cls");

                switch (country) {
                case 1: {
                    cout << "Tuma Kwenda" << endl;
                    cout << "1. AIRTEL RWANDA" << endl;
                    cout << "2. MTN RWANDA" << endl;

                    int provider;
                    cin >> provider;
                    system("cls");

                    switch (provider) {
                    case 1: {
                        cout << "Ingiza namba ya Airtel ya Rwanda" << endl;
                        long long phone;
                        cin >> phone;
                        system("cls");

                        if (phone >= 780000000) {
                            cout << "Ingiza kiasi cha pesa" << endl;
                            int amount;
                            cin >> amount;
                            system("cls");

                            cout << "Ingiza namba ya Siri" << endl;
                            int pin;
                            cin >> pin;
                            system("cls");

                            cout << "Umetuma kiasi cha shilingi" << amount << " Njee ya nchi" << endl;
                        }
                        break;
                    }
                    case 2: {
                        cout << "Ingiza namba ya MTN ya Rwanda" << endl;
                        long long phone;
                        cin >> phone;
                        system("cls");

                        if (phone >= 780000000) {
                            cout << "Ingiza kiasi cha pesa" << endl;
                            int amount;
                            cin >> amount;
                            system("cls");

                            cout << "Ingiza namba ya Siri" << endl;
                            int pin;
                            cin >> pin;
                            system("cls");

                            cout << "Umetuma kiasi cha shilingi" << amount << " Njee ya nchi" << endl;
                        }
                        break;
                    }
                    default:
                        cout << "Chaguo lako sio sahihi" << endl;
                    }
                    break;
                }
                default:
                    cout << "Chaguo lako sio sahihi" << endl;
                }
                break;
            }
            // Tuma kama vocha 
            case 5: {
                cout << "Ingiza namba ya simu ya mpokeaji" << endl;
                long long phone;
                cin >> phone;
                system("cls");

                if (phone >= 620000000) {
                    cout << "Ingiza kiasi kuanzia Tsh 100\n" << endl;
                    int amount;
                    cin >> amount;
                    system("cls");

                    cout << "Ingiza namba ya siri" << endl;
                    int pin;
                    cin >> pin;
                    system("cls");

                    cout << "Umetuma Tsh " << amount << " kwenda namba" << '+' << 255 << phone << endl;
                } else {
                    cout << "Namba hiyo haipo" << endl;
                }
                break;
            }
            case 99:
                goto home;
            default:
                cout << "Chaguo lako sio sahihi" << endl;
        }
        break;
    }

    // ============================================================
    // 2. VOCHA NA VIFURUSHI (Tigo Shop)
    // ============================================================
    case 2: {
        cout << "Tigo Shop\n";
        cout << "1. Nunua muda wa maongezi" << endl;
        cout << "2. Nunua vifulushi Vya Tigo" << endl;
        cout << "3. Nunua mitandao mingine" << endl;
        cout << "\n";
        cout << "0 Rudi nyuma\n";

        int shopChoice;
        cin >> shopChoice;
        system("cls");

        switch (shopChoice) {
            case 1: {
                cout << "Nunua muda wa maongezi" << endl;
                cout << "1. Binafsi" << endl;
                cout << "2. Nambari" << endl;

                int forWhom;
                cin >> forWhom;
                system("cls");

                switch (forWhom) {
                    case 1: {
                        cout << "Ingiza kiasi kiwango cha chini ni 100\n" << endl;
                        int amount;
                        cin >> amount;
                        system("cls");

                        cout << "Weka neno siri" << endl;
                        int pin;
                        cin >> pin;
                        system("cls");

                        cout << "umetumia Tsh " << amount << " kununua muda wa maongezi\n" << endl;
                        break;
                    }
                    case 2: {
                        cout << "Ingiza namba ya simu" << endl;
                        long long phone;
                        cin >> phone;
                        system("cls");

                        cout << "ingiza kiasi kuanzia 100\n" << endl;
                        int amount;
                        cin >> amount;
                        system("cls");

                        cout << "ingiza namba ya siri" << endl;
                        int pin;
                        cin >> pin;
                        system("cls");

                        cout << "umetumia Tsh " << amount << " kununua muda wa maongezi kwa namba "
                            << phone << "\n" << endl;
                        break;
                    }
                    default:
                        cout << "Chaguo lako sio sahihi\n";
                }
                break;
            }
            case 0:
                goto home;

            case 2: {
                cout << "Nunua vifulushi vya Tigo" << endl;
                cout << "1)Saizi Yako" << endl;
                cout << "2)SikU+BONUS" << endl;
                cout << "3)Wiki+BONUS" << endl;
                cout << "4)Mwezi+BONUS" << endl;

                int packageSize;
                cin >> packageSize;
                system("cls");

                switch (packageSize) {
                case 1: {
                    cout << "1)Tsh500=Dk50+Sm50(saa24)" << endl;
                    cout << "2)Tsh1500=Dk65+Sm100 (Saa 24)" << endl;
                    int planChoice;
                    cin >> planChoice;
                    system("cls");

                    cout << "Ingiza kiasi" << endl;
                    int amount;
                    cin >> amount;
                    system("cls");

                    if (amount) {
                        cout << "1 Kwa salio la kawaida" << endl;
                        cout << "2 Kwa TigoPesa" << endl;
                    } else {
                        cout << "Try Again";
                    }

                    int payMethod;
                    cin >> payMethod;
                    system("cls");

                    switch (payMethod) {
                    case 1:
                        cout << "Kwa salio la kawaida" << endl;
                        break;
                    case 2:
                        cout << "Ingiza namba ya siri" << endl;
                        break;
                    default:
                        cout << "Umekosea jaribu tena";
                    }

                    int pin;
                    cin >> pin;
                    system("cls");

                    cout << "Umenunua kiflushi cha Tsh " << amount << " asante kwa kuchagua Tigo" << endl;
                    break;
                }
                case 2: {
                    cout << "chagua kifurushi" << endl;
                    cout << "1)Dakika(Mitandao Yote+SMS)" << endl;
                    cout << "2)internet" << endl;
                    cout << "3)Combo (DK+MB+SMS)" << endl;

                    int bundleType;
                    cin >> bundleType;
                    system("cls");

                    switch (bundleType) {
                    case 1: {
                        cout << "1 Tsh500=Dk20+Dk5+SMS50" << endl;
                        cout << "2 Tsh1000=Dk85+Dk25+SMS50" << endl;
                        cout << "3 Tsh2000=Dk330+Dk70+SMS100" << endl;
                        int planChoice;
                        cin >> planChoice;
                        system("cls");

                        cout << "Ingiza kiasi" << endl;
                        int amount;
                        cin >> amount;
                        system("cls");

                        if (amount) {
                            cout << "1 Kwa salio la kawaida" << endl;
                            cout << "2 Kwa TigoPesa" << endl;
                        } else {
                            cout << "Try Again";
                        }

                        int payMethod;
                        cin >> payMethod;
                        system("cls");

                        switch (payMethod) {
                        case 1:
                            cout << "Kwa salio la kawaida" << endl;
                            break;
                        case 2:
                            cout << "Ingiza namba ya siri" << endl;
                            break;
                        default:
                            cout << "UMEKOSEA JALIBU TENA" << endl;
                        }

                        int pin;
                        cin >> pin;
                        system("cls");

                        cout << "Imethibitishwa Tsh " << amount << " imetumika kununua kifurushi" << endl;
                        break;
                    }
                    case 2: {
                        cout << "1)Tsh500=MB100" << endl;
                        cout << "2)Tsh1000=MB350" << endl;
                        cout << "3)Tsh2000=GB1" << endl;
                        int planChoice;
                        cin >> planChoice;
                        system("cls");

                        cout << "Ingiza kiasi" << endl;
                        int amount;
                        cin >> amount;
                        system("cls");

                        if (amount) {
                            cout << "1 Kwa salio la kawaida" << endl;
                            cout << "2 Kwa TigoPesa" << endl;
                        } else {
                            cout << "Try Again";
                        }

                        int payMethod;
                        cin >> payMethod;
                        system("cls");

                        switch (payMethod) {
                        case 1:
                            cout << "Kwa salio la kawaida" << endl;
                            break;
                        case 2:
                            cout << "Ingiza namba ya siri" << endl;
                            break;
                        default:
                            cout << "UMEKOSEA JARIBU TENA";
                        }

                        int pin;
                        cin >> pin;
                        system("cls");

                        cout << "Umenunua kifurushi cha Tsh " << amount << endl;
                        break;
                    }
                    case 3: {
                        cout << "1 Tsh1000=Dk25+Dk5+MB150+SMS50" << endl;
                        cout << "2 Tsh2000=Dk80+Dk30+MB500+SMS50" << endl;
                        int planChoice;
                        cin >> planChoice;
                        system("cls");

                        cout << "Ingiza kiasi cha pesa" << endl;
                        int amount;
                        cin >> amount;
                        system("cls");

                        if (amount) {
                            cout << "1 kwa salio la kawaida" << endl;
                            cout << "2 Kwa TigoPesa" << endl;
                        } else {
                            cout << "Try again" << endl;
                        }

                        int payMethod;
                        cin >> payMethod;
                        system("cls");

                        switch (payMethod) {
                        case 1:
                            cout << "1 Kwa salio la kawaida" << endl;
                            break;
                        case 2:
                            cout << "Ingiza namba ya siri" << endl;
                            break;
                        default:
                            cout << "Umekosea jalibu baadae" << endl;
                        }

                        int pin;
                        cin >> pin;
                        system("cls");

                        cout << "umetuma TSH " << amount << " kwaajiri kama gharama za bundle" << endl;
                        break;
                    }
                    default:
                        cout << "Chaguo lako sio sahihi" << endl;
                    }
                    break;
                }
                case 3: {
                    cout << "1 Tsh1500=Dk60+Dk10+SMS50" << endl;
                    cout << "2 Tsh3000=Dk240+Dk40+SMS100" << endl;
                    cout << "3 Tsh5000=Dk400+Dk200+SMS300" << endl;
                    cout << "4 Tsh10000=Dk960+Dk340+SMS300" << endl;

                    int planChoice;
                    cin >> planChoice;
                    system("cls");

                    cout << "Ingiza kiasi cha pesa" << endl;
                    int amount;
                    cin >> amount;
                    system("cls");

                    if (amount) {
                        cout << "1 Kwa salio la kawaida" << endl;
                        cout << "2 Kwa TigoPesa" << endl;
                    } else {
                        cout << "Try Again" << endl;
                    }

                    int payMethod;
                    cin >> payMethod;
                    system("cls");

                    switch (payMethod) {
                    case 1:
                        cout << "1 Kwa salio la kawaidi" << endl;
                        break;
                    case 2:
                        cout << "Ingiza namba ya siri" << endl;
                        break;
                    default:
                        cout << "Umekosea Jaribu baadae" << endl;
                    }

                    int pin;
                    cin >> pin;
                    system("cls");

                    cout << "umekalibia kutuma Tsh " << amount << " kwa ajiri ya kifurushi" << endl;
                    break;
                }
                case 4: {
                    cout << "1 Tsh50000=Dk7200+Dk1800+SMS300" << endl;
                    cout << "2 Tsh30000=Dk3800+DK1000+SMS500" << endl;
                    cout << "3 Tsh20000=Dk2000+Dk1000+SMS500" << endl;
                    cout << "4 Tsh10000=Dk800+Dk600+SMS500" << endl;

                    int planChoice;
                    cin >> planChoice;
                    system("cls");

                    cout << "Ingiza kiasi cha pesa" << endl;
                    int amount;
                    cin >> amount;
                    system("cls");

                    if (amount) {
                        cout << "1 Kwa salio la kawaida" << endl;
                        cout << "2 Kwa TigoPesa" << endl;
                    } else {
                        cout << "Try Again" << endl;
                    }

                    int payMethod;
                    cin >> payMethod;
                    system("cls");

                    switch (payMethod) {
                    case 1:
                        cout << "1 Kwa salio la kawaidi" << endl;
                        break;
                    case 2:
                        cout << "Ingiza namba ya siri" << endl;
                        break;
                    default:
                        cout << "Umekosea Jaribu baadae" << endl;
                    }

                    int pin;
                    cin >> pin;
                    system("cls");

                    cout << "umekalibia kutuma Tsh " << amount << " kwa ajiri ya kifurushi" << endl;
                    break;
                }
                default:
                    cout << "Chaguo lako sio sahihi" << endl;
                }
                break;
            }
            case 3: {
                cout << "Chagua Mtandao" << endl;
                cout << "1 Smile" << endl;
                cout << "2 Smart Bundle" << endl;
                cout << "3 Smart Airtime" << endl;

                int otherNetwork;
                cin >> otherNetwork;
                system("cls");

                switch (otherNetwork) {
                case 1: {
                    cout << "Chagua kumbukumbu namba" << endl;
                    cout << "1 Weka kumbukumbu namba" << endl;
                    int refOption;
                    cin >> refOption;
                    system("cls");

                    cout << "Weka kumbukumbu namba" << endl;
                    int refNumber;
                    cin >> refNumber;
                    system("cls");

                    cout << "Maelezo ya Ankara: Namba ya kampuni: 110110 Jina la kampuni: Smile "
                        << "kumbukumbu ya malipo: " << refNumber
                        << " Kiasi 1,000 Ada: Tsh 0 Ingiza namba ya siri kuhakiki:" << endl;
                    int pin;
                    cin >> pin;
                    system("cls");

                    cout << "Muamala umesitishwa.Pesa zako zimerudishwa kwenye akaunti yako ya Tigo Pesa. "
                        << "Tafadhari hakikisha una salio la kutosha kufanya muamala huu kisha jaribu tena" << endl;
                    break;
                }
                case 2: {
                    cout << "Chagua kumbukumbu namba" << endl;
                    cout << "1 Weka kumbukumbu namba" << endl;
                    int refOption;
                    cin >> refOption;
                    system("cls");

                    cout << "weka kumbukumbu namba" << endl;
                    int refNumber;
                    cin >> refNumber;
                    system("cls");

                    cout << "Ingiza kiasi" << endl;
                    int amount;
                    cin >> amount;
                    system("cls");

                    cout << "Maelezo ya Ankara: Namba ya kampuni: 231055 Jina la kampuni: Smile Bundle "
                        << "kumbukumbu ya malipo: " << amount << " kiasi " << refNumber
                        << " Ada: Tsh 10 Ingiza namba ya siri ilikuendelea" << endl;
                    int pin;
                    cin >> pin;
                    system("cls");

                    cout << "Muamala umefanyika.Pesa zako zimetumwa kwenye akaunti yako ya Tigopesa" << endl;
                    break;
                }
                case 3: {
                    cout << "Weka kumbukumbu namba" << endl;
                    int refNumber;
                    cin >> refNumber;
                    system("cls");

                    cout << "Ingiza kiasi" << endl;
                    int amount;
                    cin >> amount;
                    system("cls");

                    cout << "Maelezo ya Ankara: Namba ya kampuni: 150528 Jina la kampuni: Smart Airtime "
                        << "kumbukumbu ya malipo: " << refNumber << " kiasi " << amount
                        << " Ada Tsh 0 Ingiza namba ya siri" << endl;
                    int pin;
                    cin >> pin;
                    system("cls");

                    cout << "Muamala umefanyika. Pesa yako imetumwa kwenye salio la kawaida" << endl;
                    break;
                }
                default:
                    cout << "Chaguo lako sio sahihi" << endl;
                }
                break;
            }
            default:
                cout << "Chaguo lako sio sahihi\n";
                break;
        }
        break;
    }

    // ============================================================
    // 3. KUTOA PESA
    // ============================================================
    case 3: {
        cout << "Ingiza namba ya wakala kwa USAHIHI." << endl;
        long long agentNumber;
        cin >> agentNumber;
        system("cls");

        cout << "Ingiza kiasi" << endl;
        int amount;
        cin >> amount;
        system("cls");

        cout << "Unakaribia kutoa TSH " << amount << " kwa wakala " << agentNumber
             << " .Ada:TSH 300. Tafadhali hakiki jina la wakala kisha ingiza namba ya siri:" << endl;
        int pin;
        cin >> pin;
        system("cls");

        cout << "Imethibitishwa Umetoa TSH " << amount << " kwa wakala " << agentNumber
             << " Salio kuu la akaunti yako ni TSH " << amount << ".00" << endl;
        break;
    }
    case 99:
        goto home;

    // ============================================================
    // 4. MALIPO (Lipa bili)
    // ============================================================
    case 4: {
        cout << "Malipo\n";
        cout << "1. Kununua LUKU\n";
        cout << "2. Kupata majina ya kampuni\n";
        cout << "3. Ingiza namba ya kampuni\n";
        cout << "4. Iifadhi kumbukumbu namba\n";
        cout << "5. Malipo ya serikali\n";
        cout << "6. Malipo mtandao\n";
        cout << "7. Michezo\n";
        cout << "\n";
        cout << "0  Kuludi nyuma\n";

        int billChoice;
        cin >> billChoice;
        system("cls");

        switch (billChoice) {
            case 1:
                cout << "Kununua LUKU" << endl;
                cout << "1. Ingiza Namba ya Mita " << endl;
                cout << "2. Chagua mita ya LUKU" << endl;
                cout << "3. Ongeza mita ya LUKU" << endl;
                cout << "4. Futa mita ya LUKU" << endl;
                cout << "" << endl;
                cout << "99 Menyu Kuu" << endl;

                break;

            case 2:
                cout << "1. MKOPO" << endl;
                cout << "2. Mifuko ya jamii " << endl;
                cout << "3. Manunuzi" << endl;
                cout << "4. TRA" << endl;
                cout << "5. Kin'gamuzi" << endl;
                cout << "6. TIGO" << endl;
                cout << "7. Huduma za usafiri" << endl;
                cout << "8. Malipo ya maji" << endl;
                cout << "9. UTT AMIS & Elimu" << endl;
                cout << "" << endl;
                cout << "99 Menyu Kuu" << endl;
                break;

            case 3:
                cout << "Ingiza Namba ya kampuni " << endl;
                cout << "" << endl;
                cout << "99 Menyu Kuu" << endl;
                break;

            case 4:
                cout << "Hifadhi namba yako ya kumbukumbu" << endl;
                cout << "1. Hifadhi namba yako ya kumbukumbu " << endl;
                cout << "2. Angalia kumbukumbu namba" << endl;
                cout << "3. Futa kumbukumbu namba" << endl;
                cout << "" << endl;
                cout << "99 Menyu Kuu" << endl;
                break;

            case 5:
                cout << "Tafadhali ingiza namba ya malipo " << endl;
                cout << "\n99 Menyu Kuu" << endl;
                break;

            case 6:
                cout << "1. TIKETI ZA MPIRA WA MIGUU " << endl;
                break;

            case 7:
                cout << "1. PATA PATA" << endl;
                cout << "2. Biko " << endl;
                cout << "3. Supa5" << endl;
                cout << "4. Tatu Mzuka" << endl;
                cout << "5. M-BET" << endl;
                cout << "6. SportPesa" << endl;
                cout << "7. Mnada Poa" << endl;
                cout << "8. Betpawa" << endl;
                cout << "9. Michezo Zaidi" << endl;
                cout << "" << endl;
                cout << "99 Menyu Kuu" << endl;
                break;

            case 0:
                goto home;

            default:
                cout << "umeingiza namba isiyo sahihi\n";
        }
        break;
    }

    // ============================================================
    // 5. LIPA KWA SIMU
    // ============================================================
    case 5: {
        cout << "lipa kwa simu\n";
        cout << "1.kwenda tigo pesa\n";
        cout << "2.kwenda mastercard QR\n";
        cout << "3.kwenda mitandao mengine\n";
        cout << "\n";
        cout << "0.menyu kuu\n";

        int payChoice;
        cin >> payChoice;
        system("cls");

        switch (payChoice) {
            case 1: {
                cout << "ingiza lipa namba\n";
                cout << "\n";
                cout << "0 menyu kuu\n";
                long long lipaNumber;
                cin >> lipaNumber;
                system("cls");

                if (lipaNumber >= 650000000 && lipaNumber <= 719999999) {
                    cout << "ingiza kiasi cha kulipa\n";
                    cout << "0. menyu kuu\n";
                    int amount;
                    cin >> amount;
                    system("cls");

                    if (amount >= 1000 && amount <= 3000000) {
                        cout << "ingiza namba ya siri\n";
                        int pin;
                        cin >> pin;
                        system("cls");

                        if (pin == 9898) {
                            cout << "ingiza 1 kukubali\n";
                            cout << "ingiza 2 kukatisha muamala\n";
                            int confirm;
                            cin >> confirm;

                            switch (confirm) {
                            case 1:
                                system("cls");
                                cout << "98JHNG6478 muamala wako umekamilika umetuma kiasi cha shiling \n";
                                break;
                            case 2:
                                system("cls");
                                cout << "umesitisha muamala\n";
                                break;
                            default:
                                system("cls");
                                cout << "umeingiza isiyo sahihi";
                            }
                        } else {
                            cout << "umeingiza namba ya siri batili";
                        }
                    } else {
                        cout << " umeingiza kiasi kisicho sahihi";
                    }
                } else {
                    cout << "umeingiza namba isiyo ya tigo";
                }
                break;
            }
            case 2: {
                cout << "ingiza tarakimu 8 za mpokeaji\n";
                cout << "\n";
                cout << "0 menyu kuu\n";
                long long merchantNumber;
                cin >> merchantNumber;
                system("cls");

                if (merchantNumber >= 10000000 && merchantNumber <= 99999999) {
                    cout << "ingiza kiasi cha kulipa\n";
                    int amount;
                    cin >> amount;
                    system("cls");

                    if (amount >= 1000 && amount <= 30000000) {
                        cout << "unakaribia kulipa Tsh " << amount << " kwenda kwa mastercard QR\n";
                        cout << "siri kuthibitisha.\n";
                        int pin;
                        cin >> pin;
                        system("cls");

                        if (pin == 1234) {
                            cout << "bonyeza 1 kuthibitisha\n";
                            cout << "bonyeza 2 kusitisha\n";
                            int confirm;
                            cin >> confirm;
                            system("cls");

                            switch (confirm) {
                            case 1:
                                cout << "98JHNG6478 muamala wako umekamilika umetuma kiasi cha shiling \n";
                                cout << amount << " kwenda kwenye mastercard QR " << "+255" << merchantNumber
                                    << " salio lako ni ";
                                break;
                            case 2:
                                cout << "umesitisha muamala";
                                break;
                            default:
                                cout << "umeingiza namba isiyo sahihi";
                            }
                        } else {
                            cout << "umeingiza namba ya siri batili";
                        }
                    } else {
                        cout << "kiasi ulichoingiza hakijakidhi matumizi ya miamala kwa siku\n";
                    }
                } else {
                    cout << "umeingiza tarakimu zisizosahihi";
                }
                break;
            }
            case 3: {
                cout << " chagua mtandao\n";
                cout << "1.M-Pesa\n";
                cout << "\n";
                cout << "0 menyu kuu\n";

                int otherNetwork;
                cin >> otherNetwork;
                system("cls");

                switch (otherNetwork) {
                case 1: {
                    cout << "ingiza M-Pesa lipa namba\n";
                    cout << "\n";
                    cout << "0. menyu kuu\n";
                    long long lipaNumber;
                    cin >> lipaNumber;
                    system("cls");

                    if (lipaNumber >= 740000000 && lipaNumber <= 769999999) {
                        cout << "ingiza kiasi\n";
                        int amount;
                        cin >> amount;
                        system("cls");

                        if (amount >= 1000 && amount <= 30000000) {
                            cout << "unakaribia kutuma tsh " << amount << " kwenda kwa mpokeaji wa\n";
                            cout << "vodacom mwenye namba " << lipaNumber << " ingiza namba ya siri kuthibitisha\n";
                            int pin;
                            cin >> pin;
                            system("cls");

                            if (pin == 9898) {
                                cout << "hongera umetuma kiasi cha shilingi " << amount << " kwenda kwa mpokeaji \n";
                                cout << "+255" << lipaNumber << " salio lako ni shilingi " << amount;
                            } else {
                                cout << " hakikisha una kiasi cha kutosha kufanya muamala huu\n";
                            }
                        } else {
                            cout << "umeingiza namba ya siri batili";
                        }
                    } else {
                        cout << "umeingiza kiasi kisicho sahihi kwa matumizi ya miamala ya siku";
                    }
                    break;
                }
                default:
                    system("cls");
                    cout << "umeingiza namba isiyo sahihi\n";
                }
                break;
            }
            case 0:
                goto home;
        }
        break;
    }

    // ============================================================
    // 6. JIHUDUMIE
    // ============================================================
    case 6: {
        cout << "jihudumie\n";
        cout << "1.rudisha muamala\n";
        cout << "2.kubali/kataa kurudisha\n";
        cout << "3.angalia salio\n";
        cout << "4.namba ya siri\n";
        cout << "5.taarifa za miamala\n";
        cout << "6.huduma kwa wateja\n";
        cout << "7.tokeni za LUKU\n";
        cout << "\n";
        cout << "0.menyu\n";

        int selfChoice;
        cin >> selfChoice;
        system("cls");

        switch (selfChoice) {
        case 1:
            cout << "hakuna miamala ya kuzuia/There are no transaction\n";
            cout << "for reversal initition\n";
            break;

        case 2:
            cout << "hakuna miamala iliyozuia /There are no pending\n";
            cout << "reversals for approval\n";
            break;

        case 3: {
            cout << "tafadhari ingiza namba yako ya siri\n";
            cout << "\n";
            cout << "0.menyu kuu\n";

            int pin;
            cin >> pin;
            system("cls");

            if (pin == 9898) {
                cout << "salio lako ni shiling " << pin << " baada ya makato Tsh " << endl;
            } else {
                cout << "umeingiza namba ya siri batili";
            }
            break;
        }
        case 4: {
            cout << "namba ya siri\n";
            cout << "1.badili namba ya siri\n";
            cout << "\n";
            cout << "0. menyu kuu\n";

            int pinChoice;
            cin >> pinChoice;
            system("cls");

            switch (pinChoice) {
            case 1:
                system("cls");
                cout << "no database found\n";
                break;
            case 0:
                system("cls");
                goto home;
            default:
                system("cls");
                cout << "umeingiza namba isiyo sahihi";
            }
            break;
        }
        case 5: {
            cout << "taarifa za miamala\n";
            cout << "1.taarifa fupi\n";
            cout << "2. taarifa ya mwezi\n";
            cout << "\n";
            cout << "0. menyu kuu\n";

            int statementChoice;
            cin >> statementChoice;
            system("cls");

            switch (statementChoice) {
            case 1:
                system("cls");
                cout << "no database found\n";
                break;
            case 2:
                system("cls");
                cout << "no database found";
                break;
            case 0:
                system("cls");
                goto home;
            default:
                cout << "umeingiza namba isiyo sahihi";
            }
            break;
        }
        case 6:
            system("cls");
            cout << " piga 100 kuwasiliana na huduma kwa wateja\n";
            break;

        case 7:
            system("cls");
            cout << " hakuna miamala ua Luku/there are no luku\n";
            cout << "transactions";
            break;

        case 0:
            system("cls");
            goto home;

        default:
            cout << "umeingiza namba isiyo sahihi";
        }
        break;
    }

    // ============================================================
    // 7. HUDUMA ZA KIFEDHA
    // ============================================================
    case 7: {
        cout << "huduma za kifedha\n";
        cout << "1.tigo pesa kwenda benki\n";
        cout << "2.benki kwenda tigopesa\n";
        cout << "3.bima mkononi\n";
        cout << "4.tigo nivushe\n";
        cout << "5.kutoa pesa ATM\n";
        cout << "6.selcom pay\n";
        cout << "\n";
        cout << "0.menyu kuu\n";

        int financeChoice;
        cin >> financeChoice;
        system("cls");

        switch (financeChoice) {
        case 1: {
            cout << "tigo kwenda benki\n";
            cout << "1.CRDB\n";
            cout << "2.NMB\n";
            cout << "3.BOA\n";
            cout << "4.ACCESS\n";
            cout << "5.TPB\n";
            cout << "6.AKIBA BANK\n";
            cout << "7.EXIM\n";
            cout << "8.YETU\n";
            cout << "9.NBC\n";
            cout << "10.OTHER BANKS\n";
            cout << "11.BENKI NYINGINEZO\n";
            cout << "12. OTHER BANKS 3\n";
            cout << "\n";
            cout << " 0. MENYU KUU\n";

            int bank;
            cin >> bank;
            system("cls");

            cout << "1. Ingiza namba ya kumbukumbu\n";
            cout << "2. Chagua namba ya kumbukumbu\n";
            cout << "3. Ongeza akaunti namba ya Benki\n";
            cout << "4. Futa akaunti namba ya benki\n";

            int accountAction;
            cin >> accountAction;
            system("cls");

            switch (accountAction) {
            case 1: {
                cout << "Weka namba ya kumbukumbu ya malipo\n";
                int refNumber;
                cin >> refNumber;
                system("cls");

                cout << "Ingiza kiasi unacho tuma\n";
                int amount;
                cin >> amount;
                system("cls");

                cout << "weka neno siri ili kuendelea\n";
                int pin;
                cin >> pin;
                system("cls");

                cout << "Umetuma Tsh " << amount
                     << " kwenda kwenye akaunti yako ya CRDB Bank asante kwa kuchagua simu Banki\n";
                break;
            }
            case 2:
                cout << "Hakuna mawasiliano/kumbukumbu namba iliyowekwa\n";
                break;

            case 3: {
                cout << "Weka akounti namba ya banki\n";
                long long accountNumber;
                cin >> accountNumber;
                system("cls");

                cout << "Ingiza kiasi unacho tuma\n";
                int amount;
                cin >> amount;
                system("cls");

                cout << "weka neno siri ili kuendelea\n";
                int pin;
                cin >> pin;
                system("cls");

                cout << "Umetuma Tsh " << amount
                     << " kwenda kwenye akaunti yako ya CRDB Bank asante kwa kuchagua simu Banki\n";
                break;
            }
            default:
                cout << "Chaguo lako sio sahihi\n";
            }
            break;
        }
        case 2:
            cout << "1. Ingiza namba ya kumbukumbu\n";
            cout << "2. Chagua namba ya kumbukumbu\n";
            cout << "3. Ongeza akaunti namba ya Benki\n";
            cout << "4. Futa akaunti namba ya benki\n";
            cout << "\n";
            break;

        case 3:
            cout << "1. Ingiza namba ya kumbukumbu\n";
            cout << "2. Chagua namba ya kumbukumbu\n";
            cout << "3. Ongeza akaunti namba ya Benki\n";
            cout << "4. Futa akaunti namba ya benki\n";
            cout << "\n";
            break;

        case 4:
            cout << "1. Ingiza namba ya kumbukumbu\n";
            cout << "2. Chagua namba ya kumbukumbu\n";
            cout << "3. Ongeza akaunti namba ya Benki\n";
            cout << "4. Futa akaunti namba ya benki\n";
            break;

        case 5:
            cout << "1. Ingiza namba ya kumbukumbu\n";
            cout << "2. Chagua namba ya kumbukumbu\n";
            cout << "3. Ongeza akaunti namba ya Benki\n";
            cout << "4. Futa akaunti namba ya benki\n";
            break;

        case 6: {
            cout << "ingiza namba ya malipo\n";
            cout << "\n";
            cout << "0. menyu kuu\n";
            long long payNumber;
            cin >> payNumber;
            system("cls");

            if (payNumber >= 10000000 && payNumber <= 99999999) {
                cout << "ingiza kiasi unachotala kulipia\n";
                int amount;
                cin >> amount;
                system("cls");

                if (amount >= 1000 && amount <= 30000000) {
                    cout << "unakaribia kutuma tsh " << amount << " kwenda kwa mpokeaji wa\n";
                    cout << "+255" << payNumber << " ingiza namba ya siri kuthibitisha\n";
                    int pin;
                    cin >> pin;
                    system("cls");

                    if (pin == 1234) {
                        cout << "hongera umetuma kiasi cha shilingi " << amount
                             << " kwenda kwenye namba" << payNumber;
                        cout << "+255" << payNumber << " salio lako ni shilingi" << amount;
                    } else {
                        cout << " hakikisha una kiasi cha kutosha kufanya muamala huu\n";
                    }
                } else {
                    cout << "umeingiza namba ya siri batili";
                }
            } else {
                cout << "umeingiza kiasi kisicho sahihi kwa matumizi ya miamala ya siku";
            }
            break;
        }
        case 0:
            goto home;
        }
        break;
    }

    // ============================================================
    // 8. LANGUAGE
    // ============================================================
    case 8: {
        cout << "select language\n";
        cout << "1.swahili\n";
        cout << "2.english\n";
        cout << "\n";
        cout << "0.menyu kuu\n";

        int langChoice;
        cin >> langChoice;
        system("cls");

        switch (langChoice) {
        case 1: {
            system("cls");
            cout << "enter PIN\n";
            int pin;
            cin >> pin;
            system("cls");

            if (pin == 1234) {
                cout << "no database for change language";
            } else {
                cout << "you enter wrong PIN";
            }
            break;
        }
        case 2: {
            system("cls");
            cout << "ingiza namba ya siri\n";
            int pin;
            cin >> pin;
            system("cls");

            if (pin == 1234) {
                cout << "hakuna database kwaajili ya kubadili lugha";
            } else {
                cout << "umeingiza namba ya siri batili";
            }
            break;
        }
        case 0:
            system("cls");
            goto home;

        default:
            cout << "Chaguo lako isiyo sahihi. Tafadhari jaribu baadae";
        }
        break;
    }

    // ============================================================
    // 9. OFA
    // ============================================================
    case 9: {
        cout << "ofa yako\n";
        cout << "1. pata bonusi mpaka TSH 10000/= ukipokea kuanzia \n";
        cout << "Tsh 200,000 au zaidi kutoka benki yeyote\n";

        int offerChoice;
        cin >> offerChoice;
        system("cls");

        switch (offerChoice) {
        case 1: {
            cout << "bonyeza 1 kujiunga na ofa hii bure (ofa hii itadumu\n";
            cout << "hadi tarehe 31st match 2021)\n";
            int confirm;
            cin >> confirm;
            system("cls");

            cout << "ndugu mteja ombi lako linashughulikiwa";
            break;
        }
        case 0:
            system("cls");
            goto home;

        default:
            system("cls");
            cout << "Samahani umeingiza tarakimu isiyo sahihi. Tafadhari jaribu tena baadae";
        }
        break;
    }

    default:
        cout << "Chaguo lako sio sahihi\n";
    }

    return 0;
}