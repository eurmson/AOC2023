//
// Created by eurms on 12/7/2023.
//
//
// Created by eurms on 12/6/2023.
//

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

char* input = "8A7J7 301\n"
              "QAAT7 677\n"
              "J3K4K 622\n"
              "KJJ62 577\n"
              "49AAA 298\n"
              "45585 855\n"
              "33KKK 115\n"
              "4Q777 438\n"
              "7KK77 836\n"
              "5T55T 397\n"
              "85855 56\n"
              "Q6Q38 157\n"
              "AA8AA 85\n"
              "32J33 293\n"
              "KKQQA 247\n"
              "888J4 944\n"
              "2AJ2K 482\n"
              "33777 338\n"
              "KT434 696\n"
              "K3K63 648\n"
              "86866 136\n"
              "93983 584\n"
              "57857 489\n"
              "5JJ2Q 76\n"
              "82335 133\n"
              "J25T4 559\n"
              "9TQ2A 211\n"
              "596J6 926\n"
              "ATAAA 513\n"
              "6KKKQ 277\n"
              "AAA22 554\n"
              "J2265 332\n"
              "8Q3QQ 486\n"
              "6735A 28\n"
              "Q5555 595\n"
              "J9888 262\n"
              "5QQQ2 626\n"
              "J7777 953\n"
              "643TA 572\n"
              "8579Q 99\n"
              "23294 683\n"
              "55J54 501\n"
              "9JK93 567\n"
              "64388 941\n"
              "3J8T5 40\n"
              "29K29 422\n"
              "JQ4K2 401\n"
              "AA6A3 78\n"
              "2KK44 821\n"
              "9AA2A 884\n"
              "43434 386\n"
              "J7A67 177\n"
              "4JKKT 956\n"
              "AA999 296\n"
              "2A2T9 519\n"
              "9T9KT 342\n"
              "Q5J5A 19\n"
              "QJK7A 925\n"
              "AA9AA 337\n"
              "4T2QT 751\n"
              "77888 324\n"
              "343QT 914\n"
              "33229 576\n"
              "J5Q5Q 169\n"
              "22952 620\n"
              "J4444 17\n"
              "T9JTT 172\n"
              "48888 729\n"
              "28522 138\n"
              "66363 302\n"
              "68TTJ 778\n"
              "5Q885 66\n"
              "24KJ3 229\n"
              "5A68K 731\n"
              "A79A7 906\n"
              "QQQAQ 698\n"
              "J34AJ 109\n"
              "TTTTJ 503\n"
              "3J528 183\n"
              "5A5AA 598\n"
              "5AAAA 782\n"
              "TT77J 968\n"
              "24Q62 178\n"
              "T6K7A 811\n"
              "99788 53\n"
              "494K6 560\n"
              "7JQ87 327\n"
              "Q9QQQ 597\n"
              "496Q2 392\n"
              "2252K 995\n"
              "Q85TA 2\n"
              "KT66Q 165\n"
              "383T6 509\n"
              "9997Q 724\n"
              "4TT4T 368\n"
              "35TQA 707\n"
              "33534 24\n"
              "KKKJ4 469\n"
              "A9TAA 830\n"
              "A445A 481\n"
              "3Q63Q 192\n"
              "AATAT 680\n"
              "2225J 436\n"
              "Q4869 471\n"
              "A4JA4 330\n"
              "5K35T 545\n"
              "TK3A4 877\n"
              "8K62J 596\n"
              "9Q7T8 582\n"
              "898KK 813\n"
              "5AJJA 504\n"
              "T5TKQ 289\n"
              "6T88Q 359\n"
              "A8AAJ 526\n"
              "393J3 817\n"
              "Q2Q22 212\n"
              "Q8Q22 89\n"
              "265T8 757\n"
              "Q2584 807\n"
              "T33TT 853\n"
              "T22TA 391\n"
              "46999 61\n"
              "9AA9J 57\n"
              "6T538 674\n"
              "3T253 271\n"
              "63TAJ 395\n"
              "34943 323\n"
              "6QQQQ 497\n"
              "TA75K 938\n"
              "4T467 141\n"
              "36AQK 197\n"
              "884A4 228\n"
              "77277 453\n"
              "AQ854 50\n"
              "Q56QJ 456\n"
              "T4TKT 319\n"
              "K63Q4 30\n"
              "79793 110\n"
              "AJKQ6 421\n"
              "22278 996\n"
              "222TT 357\n"
              "42J74 647\n"
              "Q4QAT 634\n"
              "66574 951\n"
              "2KK22 446\n"
              "Q65Q3 533\n"
              "77887 267\n"
              "58533 719\n"
              "287K9 51\n"
              "Q5656 199\n"
              "564AQ 106\n"
              "QJ579 77\n"
              "9732T 46\n"
              "JAK23 808\n"
              "688K8 364\n"
              "A993A 651\n"
              "Q9QQ9 93\n"
              "74777 929\n"
              "QT722 723\n"
              "76QAQ 621\n"
              "8K836 573\n"
              "77557 783\n"
              "A5555 65\n"
              "TTT6T 643\n"
              "83595 933\n"
              "J3J97 734\n"
              "JTTA3 87\n"
              "TTAQA 282\n"
              "A555A 765\n"
              "4TQTT 538\n"
              "T777Q 763\n"
              "T82J9 63\n"
              "83359 213\n"
              "AQQAQ 363\n"
              "47AT9 311\n"
              "96A9T 310\n"
              "K5TK5 450\n"
              "ATKK8 429\n"
              "7K777 541\n"
              "5TJAK 987\n"
              "KAQ73 687\n"
              "TTATA 874\n"
              "J4TJ2 857\n"
              "666KK 204\n"
              "AA777 990\n"
              "J98A8 946\n"
              "7A95A 288\n"
              "3K2K3 820\n"
              "79K42 112\n"
              "A65KT 300\n"
              "596T8 266\n"
              "J5664 585\n"
              "75585 964\n"
              "73AT2 491\n"
              "2J2KT 375\n"
              "6888T 480\n"
              "A5765 992\n"
              "KK555 224\n"
              "AT2TA 514\n"
              "TTTTQ 753\n"
              "Q4348 273\n"
              "KK66K 887\n"
              "44JQ9 67\n"
              "Q339Q 341\n"
              "833Q8 574\n"
              "K456T 766\n"
              "J98KK 209\n"
              "K4644 328\n"
              "43935 79\n"
              "8848K 380\n"
              "K22A2 834\n"
              "8654Q 703\n"
              "4K2AT 96\n"
              "K276J 863\n"
              "8K64J 320\n"
              "AAA7A 571\n"
              "72747 950\n"
              "4A4Q9 120\n"
              "66636 814\n"
              "33637 881\n"
              "KK2AK 895\n"
              "J8677 851\n"
              "A48A8 430\n"
              "56656 866\n"
              "55355 976\n"
              "66J77 370\n"
              "3353J 896\n"
              "56556 237\n"
              "3KJ5Q 270\n"
              "J22J2 261\n"
              "AJ2AA 163\n"
              "JJJJJ 517\n"
              "48A28 819\n"
              "K4443 799\n"
              "TJTJ5 345\n"
              "T3K9J 868\n"
              "49AJ9 605\n"
              "45455 741\n"
              "KJJKK 754\n"
              "63333 789\n"
              "76677 989\n"
              "AJ774 264\n"
              "JKJ2A 531\n"
              "TQQQT 809\n"
              "Q6KJ6 411\n"
              "KQK7Q 704\n"
              "2A4Q5 410\n"
              "68KK8 652\n"
              "8K938 194\n"
              "72J22 242\n"
              "9J672 43\n"
              "7Q6Q5 903\n"
              "64666 95\n"
              "J2372 798\n"
              "A263T 781\n"
              "JK598 909\n"
              "55J92 625\n"
              "A2567 343\n"
              "4A7A7 174\n"
              "8KA3J 68\n"
              "JQTQ3 528\n"
              "74444 127\n"
              "QA5AT 306\n"
              "T9K7T 254\n"
              "75TT7 166\n"
              "83388 325\n"
              "888Q8 982\n"
              "8Q7A6 84\n"
              "2K7JA 663\n"
              "T9959 937\n"
              "3KA87 921\n"
              "4KJ92 786\n"
              "28A83 442\n"
              "99T8J 699\n"
              "TKKKK 457\n"
              "25552 431\n"
              "TTATK 862\n"
              "QJQKK 664\n"
              "QJQQ9 552\n"
              "T4J77 206\n"
              "Q7777 352\n"
              "QJ747 534\n"
              "9K9KK 656\n"
              "44646 479\n"
              "5T64Q 455\n"
              "QQQQK 475\n"
              "73478 827\n"
              "Q3J33 975\n"
              "Q655Q 930\n"
              "7T7T7 231\n"
              "53A72 409\n"
              "3333A 833\n"
              "29928 787\n"
              "97J58 307\n"
              "T2555 673\n"
              "Q44A5 382\n"
              "J5A57 144\n"
              "7J447 131\n"
              "8KK99 600\n"
              "99555 349\n"
              "43682 205\n"
              "63259 518\n"
              "AA3A8 591\n"
              "J444J 58\n"
              "52J23 772\n"
              "5KK3K 660\n"
              "5KT2K 329\n"
              "54K6K 252\n"
              "49J24 864\n"
              "673Q5 780\n"
              "TT848 333\n"
              "227A5 424\n"
              "JT9J5 675\n"
              "7K9QJ 825\n"
              "732Q7 461\n"
              "24343 859\n"
              "TJ333 604\n"
              "T33AJ 149\n"
              "KJ5KK 129\n"
              "54555 249\n"
              "25222 3\n"
              "TQJA3 38\n"
              "7Q7Q7 460\n"
              "999J4 557\n"
              "J6766 831\n"
              "K4KKK 185\n"
              "363K3 566\n"
              "K888J 885\n"
              "55855 488\n"
              "97979 565\n"
              "2597T 493\n"
              "77456 233\n"
              "Q9Q5Q 202\n"
              "99K23 98\n"
              "63763 7\n"
              "TQ498 849\n"
              "74626 590\n"
              "K44KK 73\n"
              "9AA97 498\n"
              "Q6696 706\n"
              "95555 697\n"
              "69969 670\n"
              "JQ294 203\n"
              "24246 425\n"
              "6QJ6A 16\n"
              "AQAAA 916\n"
              "6K6JK 313\n"
              "9AK99 41\n"
              "4T6J5 219\n"
              "6Q6T6 549\n"
              "96999 983\n"
              "79977 522\n"
              "57Q8A 732\n"
              "AQ6AQ 156\n"
              "284Q6 351\n"
              "K88KJ 123\n"
              "57A8A 606\n"
              "4J97Q 592\n"
              "5JTQ3 369\n"
              "A467T 742\n"
              "2878J 669\n"
              "KKAJ6 668\n"
              "T5TTT 570\n"
              "8AA88 665\n"
              "3238A 428\n"
              "67286 979\n"
              "88585 997\n"
              "T6866 132\n"
              "88T83 912\n"
              "68888 832\n"
              "A95TK 371\n"
              "T8Q33 167\n"
              "333K8 286\n"
              "KK888 722\n"
              "7TAK7 281\n"
              "A7J77 216\n"
              "9T85Q 969\n"
              "54444 918\n"
              "77822 151\n"
              "9KJ2T 759\n"
              "Q8483 536\n"
              "9JJA9 788\n"
              "J8Q8T 272\n"
              "27KJQ 958\n"
              "76666 671\n"
              "5T932 182\n"
              "887T4 628\n"
              "6499T 607\n"
              "447Q4 718\n"
              "9736J 716\n"
              "AQJAQ 611\n"
              "T4933 690\n"
              "3TJAJ 923\n"
              "K7722 412\n"
              "77737 22\n"
              "775AQ 812\n"
              "5QKQ5 362\n"
              "448T8 114\n"
              "A7A7A 502\n"
              "4Q466 583\n"
              "74744 749\n"
              "7363J 939\n"
              "88388 59\n"
              "Q3KQT 861\n"
              "42222 794\n"
              "96669 294\n"
              "54959 378\n"
              "TTTTA 544\n"
              "796JA 867\n"
              "92KK9 238\n"
              "9TJT9 848\n"
              "8A2A2 309\n"
              "687K3 515\n"
              "KTKKT 610\n"
              "J8659 210\n"
              "22K4K 423\n"
              "586Q9 55\n"
              "AAA7K 599\n"
              "33J73 198\n"
              "K74KJ 936\n"
              "55JJ5 943\n"
              "Q6QJQ 801\n"
              "5435J 137\n"
              "QJ5QQ 553\n"
              "AAA78 485\n"
              "67676 404\n"
              "34K33 376\n"
              "8Q32J 326\n"
              "A66KA 649\n"
              "52K8Q 179\n"
              "A32A2 561\n"
              "JTQJQ 645\n"
              "59KK7 11\n"
              "6763Q 189\n"
              "KKK88 426\n"
              "8KTJ8 681\n"
              "2222T 767\n"
              "KK5J7 372\n"
              "QQQ57 942\n"
              "7A72J 904\n"
              "2222J 467\n"
              "7KQQQ 186\n"
              "J3993 629\n"
              "73437 952\n"
              "8A37T 771\n"
              "966J9 752\n"
              "4KT29 710\n"
              "82378 840\n"
              "4QT72 785\n"
              "3629T 934\n"
              "JTK77 977\n"
              "KKQ33 915\n"
              "4242A 744\n"
              "TQA9A 215\n"
              "A6666 854\n"
              "23333 170\n"
              "TTT9T 587\n"
              "J3377 34\n"
              "6JJ66 835\n"
              "A3AAA 897\n"
              "96936 427\n"
              "8JJJ4 686\n"
              "32332 173\n"
              "QJ868 640\n"
              "67388 111\n"
              "88988 613\n"
              "4TJTT 435\n"
              "T988T 702\n"
              "K59K5 894\n"
              "Q8Q88 688\n"
              "5Q847 347\n"
              "9J599 154\n"
              "958K6 462\n"
              "AAQQA 959\n"
              "JKJKQ 846\n"
              "7992T 72\n"
              "9899A 510\n"
              "22Q22 389\n"
              "939J7 971\n"
              "J4K4A 367\n"
              "TT7TQ 816\n"
              "KKKT3 297\n"
              "97KK6 793\n"
              "7QQQ7 824\n"
              "ATQQA 102\n"
              "J597K 797\n"
              "78J88 473\n"
              "87A87 42\n"
              "828A7 527\n"
              "K8777 107\n"
              "8963J 949\n"
              "29399 998\n"
              "3TKA8 190\n"
              "3TQ66 889\n"
              "JJ5T5 985\n"
              "J566T 568\n"
              "T38K2 815\n"
              "2J5KA 646\n"
              "A8J32 184\n"
              "622Q6 777\n"
              "TK7QT 26\n"
              "47766 790\n"
              "2J5Q6 932\n"
              "9K969 878\n"
              "82235 64\n"
              "3A3JK 152\n"
              "49494 540\n"
              "7JJJ7 350\n"
              "39233 437\n"
              "5466Q 239\n"
              "Q3QQQ 961\n"
              "A8J5Q 623\n"
              "Q3333 739\n"
              "4T396 90\n"
              "25T2J 284\n"
              "TK7T3 9\n"
              "5555K 993\n"
              "J2666 383\n"
              "22292 250\n"
              "J5T95 478\n"
              "22T29 226\n"
              "24242 126\n"
              "99939 121\n"
              "73373 414\n"
              "78Q92 738\n"
              "A5362 826\n"
              "3KK2J 756\n"
              "77877 291\n"
              "T9TT9 879\n"
              "3JJTT 145\n"
              "3T363 524\n"
              "6Q6QQ 619\n"
              "Q2QQQ 8\n"
              "8J58J 967\n"
              "65KJK 398\n"
              "KTA2T 464\n"
              "T7JJJ 922\n"
              "44888 948\n"
              "2KJ2K 755\n"
              "63858 353\n"
              "49K4T 483\n"
              "5833J 180\n"
              "62822 105\n"
              "99JK9 635\n"
              "QAJAA 962\n"
              "977T5 691\n"
              "655KK 274\n"
              "9966A 393\n"
              "55J5T 303\n"
              "284K5 589\n"
              "27636 872\n"
              "K29KK 774\n"
              "K9JJ4 792\n"
              "6JKTT 108\n"
              "TK8TJ 745\n"
              "T3A7K 400\n"
              "9J3TQ 901\n"
              "ATJKK 917\n"
              "666A5 448\n"
              "A5AT6 588\n"
              "6T4J6 822\n"
              "Q9A9A 260\n"
              "594J3 241\n"
              "Q3A34 279\n"
              "A9999 220\n"
              "7AQQ9 49\n"
              "737Q3 999\n"
              "JQQ8Q 882\n"
              "78977 399\n"
              "53333 689\n"
              "2K2JQ 25\n"
              "34848 800\n"
              "2585T 334\n"
              "5T799 908\n"
              "69864 644\n"
              "659TK 278\n"
              "J4363 633\n"
              "T9J97 101\n"
              "QJ94T 615\n"
              "363J6 373\n"
              "J777J 379\n"
              "99J93 966\n"
              "TT26T 312\n"
              "TA8T8 870\n"
              "3J535 245\n"
              "86A63 283\n"
              "2KTK2 508\n"
              "Q9Q2Q 162\n"
              "59QJT 667\n"
              "6JJKQ 71\n"
              "55J25 200\n"
              "89993 980\n"
              "45474 581\n"
              "Q4394 159\n"
              "45697 346\n"
              "KK99Q 496\n"
              "J3J53 466\n"
              "3QQ3Q 348\n"
              "7843J 612\n"
              "T733K 164\n"
              "42589 818\n"
              "Q9K36 232\n"
              "QQ22Q 762\n"
              "5AA3J 287\n"
              "48KKK 449\n"
              "7QQQJ 248\n"
              "K5KJA 616\n"
              "KQ387 965\n"
              "Q4898 12\n"
              "A3T9Q 227\n"
              "K7KTT 269\n"
              "JTJ22 768\n"
              "85K88 875\n"
              "6T666 624\n"
              "97K7Q 586\n"
              "7854J 804\n"
              "T4TTT 609\n"
              "8T44T 415\n"
              "3T3KK 601\n"
              "5AAAJ 258\n"
              "8555K 828\n"
              "4Q8JQ 593\n"
              "JT823 396\n"
              "J9K96 838\n"
              "55565 632\n"
              "7J77T 713\n"
              "36353 578\n"
              "5Q962 529\n"
              "5KQ9T 181\n"
              "82697 627\n"
              "66654 88\n"
              "7747J 919\n"
              "A3AAJ 441\n"
              "569KJ 805\n"
              "TTQJ5 445\n"
              "444T4 661\n"
              "29959 37\n"
              "62J26 955\n"
              "Q4JT5 214\n"
              "KQA4T 44\n"
              "24424 758\n"
              "2Q4AK 222\n"
              "729A4 195\n"
              "4Q35T 928\n"
              "329T8 551\n"
              "6T5T5 33\n"
              "T25Q9 978\n"
              "9Q9J9 407\n"
              "A4KT7 911\n"
              "27397 603\n"
              "4244Q 490\n"
              "JA255 384\n"
              "2AAJ2 876\n"
              "6222K 125\n"
              "AA46A 360\n"
              "J4343 672\n"
              "JAJQ9 880\n"
              "888J2 468\n"
              "Q5K9J 268\n"
              "A85Q9 387\n"
              "J4A35 705\n"
              "66A64 97\n"
              "QAQQ8 700\n"
              "55TJ4 31\n"
              "88J58 650\n"
              "693AK 679\n"
              "259K2 806\n"
              "9998J 176\n"
              "6822T 235\n"
              "9J699 913\n"
              "7QQQQ 602\n"
              "T7T4T 317\n"
              "6226T 725\n"
              "JJ9J9 316\n"
              "55575 761\n"
              "A6A66 796\n"
              "K9T29 764\n"
              "33334 608\n"
              "KKK7K 893\n"
              "99988 579\n"
              "J8JJJ 259\n"
              "4AJ89 390\n"
              "9QQ84 14\n"
              "9KJ3K 580\n"
              "77736 433\n"
              "KK22K 555\n"
              "755J2 940\n"
              "4JA9A 492\n"
              "9Q555 484\n"
              "6J687 542\n"
              "99K53 910\n"
              "6236J 36\n"
              "9J999 54\n"
              "6663J 454\n"
              "85JJK 122\n"
              "966J3 171\n"
              "QJ2KK 747\n"
              "KJA2A 676\n"
              "788J5 858\n"
              "78833 218\n"
              "6KJ6J 308\n"
              "T75AT 318\n"
              "7JQ36 728\n"
              "AJ8TA 354\n"
              "96KTQ 899\n"
              "52993 402\n"
              "9K5AJ 898\n"
              "Q7JQJ 748\n"
              "5Q5QQ 48\n"
              "A5858 148\n"
              "85888 988\n"
              "2TJ82 556\n"
              "9AJK4 843\n"
              "TJ26Q 406\n"
              "2296K 356\n"
              "22K22 18\n"
              "KJ6KQ 253\n"
              "T444T 117\n"
              "6T257 715\n"
              "AA444 113\n"
              "39737 693\n"
              "877QQ 521\n"
              "TK454 735\n"
              "38QA8 562\n"
              "KT4A4 984\n"
              "JKKKK 920\n"
              "666J6 452\n"
              "8JAJT 280\n"
              "A62QJ 945\n"
              "868TT 243\n"
              "KQ66K 511\n"
              "J3J33 512\n"
              "T9K9K 160\n"
              "66TT3 537\n"
              "J3T48 234\n"
              "44999 158\n"
              "9876A 666\n"
              "JJ73Q 546\n"
              "85A3Q 20\n"
              "3333K 750\n"
              "6AJ73 381\n"
              "Q3Q58 637\n"
              "69644 654\n"
              "J6669 641\n"
              "8K2KK 733\n"
              "33535 447\n"
              "32K56 153\n"
              "TA94Q 994\n"
              "7979A 543\n"
              "Q663Q 432\n"
              "KQJ7Q 516\n"
              "66K65 6\n"
              "484T4 991\n"
              "88387 15\n"
              "96229 21\n"
              "7AK62 499\n"
              "88KK7 618\n"
              "3K344 69\n"
              "6A6KK 569\n"
              "22J24 784\n"
              "QKT53 837\n"
              "7K2KK 1\n"
              "87T95 810\n"
              "2228Q 82\n"
              "Q66AQ 548\n"
              "J6Q66 366\n"
              "5J42Q 465\n"
              "8QQJ8 246\n"
              "JAAKJ 630\n"
              "5TT99 408\n"
              "5T7Q6 779\n"
              "768A7 631\n"
              "22262 201\n"
              "664AA 104\n"
              "A96A6 128\n"
              "T666K 5\n"
              "3984K 684\n"
              "3335K 208\n"
              "79A77 891\n"
              "K7K76 285\n"
              "AQ8A6 678\n"
              "36535 130\n"
              "JT443 760\n"
              "477T9 547\n"
              "48A33 532\n"
              "AA66A 321\n"
              "56666 776\n"
              "3AQKJ 888\n"
              "K6Q68 83\n"
              "2J727 902\n"
              "3TT33 339\n"
              "85Q6T 714\n"
              "QT333 717\n"
              "7T74T 335\n"
              "J3A85 974\n"
              "8J888 617\n"
              "K974K 802\n"
              "8777Q 947\n"
              "A9Q6K 175\n"
              "77757 75\n"
              "7JA22 458\n"
              "3K499 791\n"
              "98TTJ 256\n"
              "5555J 505\n"
              "QTQQJ 70\n"
              "T232T 506\n"
              "Q9999 907\n"
              "J4A88 74\n"
              "A4K58 191\n"
              "K3888 263\n"
              "2QJ22 23\n"
              "3368Q 155\n"
              "QKKKQ 743\n"
              "JK222 139\n"
              "KQ84Q 905\n"
              "T25T2 91\n"
              "Q9TJJ 844\n"
              "QQ8Q8 720\n"
              "335KK 355\n"
              "29T76 963\n"
              "39AQ6 292\n"
              "27222 276\n"
              "88JJ8 388\n"
              "52A22 134\n"
              "7A95Q 86\n"
              "7TTTA 314\n"
              "9642K 187\n"
              "A33A3 416\n"
              "6Q66Q 92\n"
              "93A23 403\n"
              "77722 523\n"
              "33J34 196\n"
              "J8333 639\n"
              "K8TJ5 736\n"
              "222AA 116\n"
              "JT3TT 970\n"
              "87A65 225\n"
              "82555 459\n"
              "22JT2 255\n"
              "Q2223 972\n"
              "K63JA 143\n"
              "8AQ86 653\n"
              "JJ3J9 614\n"
              "3A77A 365\n"
              "KK9KT 47\n"
              "5T959 385\n"
              "7JKQ4 477\n"
              "497T3 711\n"
              "34A33 770\n"
              "57557 869\n"
              "777KJ 193\n"
              "KKK5Q 892\n"
              "9Q299 230\n"
              "34J83 795\n"
              "3KTTQ 692\n"
              "66696 695\n"
              "57472 960\n"
              "77J26 841\n"
              "TAT2T 685\n"
              "33969 662\n"
              "9Q393 295\n"
              "QKQ88 142\n"
              "TTT98 32\n"
              "25555 374\n"
              "265QK 924\n"
              "JAAJA 440\n"
              "9999K 257\n"
              "346KT 500\n"
              "JJ299 535\n"
              "QJ4KA 135\n"
              "7A422 305\n"
              "A2T85 773\n"
              "4T69J 52\n"
              "73Q8A 463\n"
              "KK6KK 420\n"
              "8Q7QJ 251\n"
              "QQK3K 168\n"
              "66644 150\n"
              "44424 444\n"
              "84T53 299\n"
              "AKAAK 240\n"
              "6A952 35\n"
              "Q5875 217\n"
              "22888 829\n"
              "38589 642\n"
              "94848 417\n"
              "32222 727\n"
              "966Q9 27\n"
              "JQ9QT 336\n"
              "52K2T 886\n"
              "J7787 721\n"
              "AAQ3A 147\n"
              "6K823 957\n"
              "6668Q 839\n"
              "AAA88 39\n"
              "KJ33K 4\n"
              "J5J5J 419\n"
              "2A7T9 275\n"
              "4A777 470\n"
              "7KK7K 377\n"
              "99992 418\n"
              "93TA8 865\n"
              "95T34 709\n"
              "K34JA 322\n"
              "94674 658\n"
              "AJAA7 45\n"
              "JQ22A 304\n"
              "K83Q2 13\n"
              "A6923 439\n"
              "98977 331\n"
              "689J6 769\n"
              "99953 931\n"
              "QQQJQ 94\n"
              "J5AA5 871\n"
              "TJTJT 413\n"
              "ATA28 530\n"
              "6T66T 564\n"
              "KAKKK 873\n"
              "T43QQ 657\n"
              "TTTT2 563\n"
              "9898J 118\n"
              "QQQQ8 659\n"
              "99997 236\n"
              "88826 188\n"
              "6KKK5 394\n"
              "2QQJ2 495\n"
              "8T864 900\n"
              "888K8 655\n"
              "28KQ4 361\n"
              "33732 472\n"
              "AA2A7 845\n"
              "TTT7T 726\n"
              "68A84 852\n"
              "3KKKK 161\n"
              "343Q2 358\n"
              "75792 476\n"
              "AAAJA 550\n"
              "KK9A9 558\n"
              "72569 737\n"
              "4AT33 708\n"
              "KKKQ9 119\n"
              "8JJJ6 315\n"
              "78A77 850\n"
              "JJQJ7 140\n"
              "3A5A5 740\n"
              "78278 344\n"
              "Q4Q44 103\n"
              "44JA4 146\n"
              "74T95 636\n"
              "2A2AT 507\n"
              "TK5Q5 474\n"
              "7T982 712\n"
              "AJ378 1000\n"
              "75858 494\n"
              "AAA99 746\n"
              "72T94 981\n"
              "TT77T 803\n"
              "393K3 124\n"
              "T8T95 265\n"
              "AJA66 244\n"
              "AA4TA 207\n"
              "44777 638\n"
              "68QT2 973\n"
              "9K628 340\n"
              "7595K 443\n"
              "9A949 682\n"
              "KJKTT 954\n"
              "23T26 100\n"
              "5KJ5T 434\n"
              "66626 81\n"
              "K33K3 856\n"
              "J7555 525\n"
              "JQJJ5 60\n"
              "868J6 935\n"
              "22299 823\n"
              "J4445 539\n"
              "9KKK7 890\n"
              "JAA48 80\n"
              "755Q5 520\n"
              "4JQQJ 223\n"
              "997T9 405\n"
              "8A888 575\n"
              "K369T 730\n"
              "A5565 847\n"
              "39JQ4 29\n"
              "QQQJJ 694\n"
              "86789 860\n"
              "333J3 10\n"
              "9A94A 221\n"
              "J99JT 62\n"
              "87888 701\n"
              "AA6A2 290\n"
              "T5QK4 775\n"
              "35354 927\n"
              "323Q3 451\n"
              "25TA5 883\n"
              "2954J 487\n"
              "376J6 594\n"
              "2K975 842\n"
              "AAAA6 986\n";

enum type{
    card,
    one_pair,
    two_pair,
    three_of_kind,
    full_house,
    four_of_kind,
    five_of_kind
};

enum value {
    p2jack = 1,
    two =2,
    three,
    four,
    five,
    six,
    seven,
    eight,
    nine,
    ten,
    jack,
    queen,
    king,
    ace
};

struct card {
    enum value card_value;
    int count;
};

struct hand {
    enum type type;
    int count;
    struct card cards[5];
    int bid;
    char * card_chars;
};

enum value card_value(char card) {
    switch (card) {
        case 'A':
            return ace;
        case 'K':
            return king;
        case 'Q':
            return queen;
        case 'J':
            return jack;
        case 'T':
            return ten;
        default:
            return card - '0';
    }
}

enum value p2_card_value(char card) {
    switch (card) {
        case 'A':
            return ace;
        case 'K':
            return king;
        case 'Q':
            return queen;
        case 'J':
            return p2jack;
        case 'T':
            return ten;
        default:
            return card - '0';
    }
}

int compare_hands (struct hand h1, struct hand h2){
    if (h1.type != h2.type) return (int)h1.type - (int)h2.type;
    for (int i = 0; i < 5; ++i)
        if (card_value(h1.card_chars[i]) != card_value(h2.card_chars[i]))
            return (int)card_value(h1.card_chars[i]) - (int)card_value(h2.card_chars[i]);
    return 0;
}
int p2_compare_hands (struct hand h1, struct hand h2){
    if (h1.type != h2.type) return (int)h1.type - (int)h2.type;
    for (int i = 0; i < 5; ++i)
        if (p2_card_value(h1.card_chars[i]) != p2_card_value(h2.card_chars[i]))
            return (int)p2_card_value(h1.card_chars[i]) - (int)p2_card_value(h2.card_chars[i]);
    return 0;
}

int compare_cards (struct card c1, struct card c2){
    if (c1.count != c2.count) return (int)c1.count - (int)c2.count;
    return (int)c1.card_value - (int)c2.card_value;
}

struct hand calculate_type(struct hand hand) {
    for (int i = 0; i < hand.count; ++i) {
        for (int j = 0; j < hand.count - i - 1; ++j) {
            if (compare_cards(hand.cards[j], hand.cards[j+1]) < 0){
                struct card tmp = hand.cards[j];
                hand.cards[j] = hand.cards[j+1];
                hand.cards[j+1] = tmp;
            }
        }
    }
    switch (hand.cards[0].count) {
        case 5:
            hand.type = five_of_kind;
            break;
        case 4:
            hand.type = four_of_kind;
            break;
        case 3:
            hand.type = hand.cards[1].count > 1 ? full_house: three_of_kind;
            break;
        case 2:
            hand.type = hand.cards[1].count > 1 ? two_pair: one_pair;
            break;
        default:
            hand.type = card;
    }
    for (int i = 0; i < hand.count; ++i) {
        for (int j = 0; j < hand.cards[i].count; ++j) {
            printf("%d ", hand.cards[i].card_value);
        }
    }
    printf("\n");
    return hand;
}

struct hand new_hand (char* card_chars, int bid) {
    struct hand hand= {0};
    hand.bid = bid;
    hand.card_chars = card_chars;
    for (int i = 0; i < 5; ++i) {
        char card_val = card_value(card_chars[i]);
        int j;
        for (j = 0; j < hand.count; ++j) {
            if (hand.cards[j].card_value == card_val){
                hand.cards[j].count++;
                break;
            }
        }
        if (j == hand.count) hand.cards[hand.count++] = (struct card){card_val, 1};
    }
    hand = calculate_type(hand);
    printf("\n");
    return hand;
}

struct hand p2_adjust_type(struct hand hand1);

struct hand p2_new_hand (char* card_chars, int bid) {
    struct hand hand= {0};
    hand.bid = bid;
    hand.card_chars = card_chars;
    for (int i = 0; i < 5; ++i) {
        char card_val = p2_card_value(card_chars[i]);
        int j;
        for (j = 0; j < hand.count; ++j) {
            if (hand.cards[j].card_value == card_val){
                hand.cards[j].count++;
                break;
            }
        }
        if (j == hand.count) hand.cards[hand.count++] = (struct card){card_val, 1};
    }
    hand = calculate_type(hand);
    hand = p2_adjust_type(hand);
    hand = calculate_type(hand);
    printf("\n");
    return hand;
}

struct hand p2_adjust_type(struct hand hand1) {
    int i;
    for (i = 0; i < hand1.count && hand1.cards[i].card_value != p2jack; ++i);
    if (i == hand1.count) return hand1;
    int j;
    for (j = 0; j < hand1.count && hand1.cards[j].card_value == p2jack; ++j);
    hand1.cards[j].count += hand1.cards[i].count;
    hand1.cards[i].count = 0;
    if (j > i) {
        struct card tmp = hand1.cards[j];
        hand1.cards[j] = hand1.cards[i];
        hand1.cards[i] = tmp;
    }


    return hand1;
}

int part1(char* string) {
    int total = 0;
    int hand_count = 0;
    char* tmp = string;
    while(*tmp != '\0') if (*tmp++ == '\n')  hand_count++;
    printf("%d\n", hand_count);
    struct hand * hands = calloc(hand_count, sizeof(struct hand));
    for(int i =0; i < hand_count; i++) {
        tmp = string;
        string += 6;
        int bid = strtol(string, NULL, 10);
        struct hand hand = new_hand(tmp, bid);
        for (int j = 0; j < i; ++j) {
            if (compare_hands(hand, hands[j]) < 0) {
                struct hand hand_tmp = hands[j];
                hands[j] = hand;
                hand = hand_tmp;
            }
        }
        hands[i] = hand;
        while(*string++ != '\n');
    }
    for (int i = 0; i < hand_count; ++i) {
        printf("%d * %d\n", (i+1), hands[i].bid);
        total += (i + 1) * hands[i].bid;
    }
    return total;
}



unsigned int part2(char* string) {
    int total = 0;
    int hand_count = 0;
    char* tmp = string;
    while(*tmp != '\0') if (*tmp++ == '\n')  hand_count++;
    printf("%d\n", hand_count);
    struct hand * hands = calloc(hand_count, sizeof(struct hand));
    for(int i =0; i < hand_count; i++) {
        tmp = string;
        string += 6;
        int bid = strtol(string, NULL, 10);
        struct hand hand = p2_new_hand(tmp, bid);
        for (int j = 0; j < i; ++j) {
            if (p2_compare_hands(hand, hands[j]) < 0) {
                struct hand hand_tmp = hands[j];
                hands[j] = hand;
                hand = hand_tmp;
            }
        }
        hands[i] = hand;
        while(*string++ != '\n');
    }
    for (int i = 0; i < hand_count; ++i) {
        printf("%d * %d\n", (i+1), hands[i].bid);
        total += (i + 1) * hands[i].bid;
    }
    return total;
}

int main() {
    printf("Part 1: %d\n", part1(input));
    printf("Part 2: %u\n", part2(input));
}
