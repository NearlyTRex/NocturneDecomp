; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl wincore_winrun_cpp_getKeyName_FUN_00559560(uint param_1)
;
;
; XREF[1]:
;   core_menu.cpp_getKeyDisplayName_FUN_004d2900 at 004d2b2d
;
; Referenced Globals:
;   void* PTR_GetKeyNameTextA_00575434 = 00175980
;   TerminatedCString s_Esc_00597f5f
;   TerminatedCString s_s_1_00597f63
;   TerminatedCString s_s_2_00597f65
;   TerminatedCString s_s_3_00597f67
;   TerminatedCString s_s_4_00597f69
;   TerminatedCString s_s_5_00597f6b
;   TerminatedCString s_s_6_00597f6d
;   TerminatedCString s_s_7_00597f6f
;   TerminatedCString s_s_8_00597f71
;   TerminatedCString s_s_9_00597f73
;   TerminatedCString s_s_0_00597f75
;   TerminatedCString s_anon_00597f77
;   TerminatedCString s_anon_00597f79
;   string s_BackSpace_00597f7b
;   ... and 88 more
;
; Called Functions:
;   GetKeyNameTextA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00559560
        ;   Label: wincore_winrun.cpp_getKeyName_FUN_00559560
    MOV EBX,dword ptr [ESP + 0x8]       ; 00559561
    CMP EBX,0x200                       ; 00559565
    JL 0x005595ae                       ; 0055956b
        ;   XREF to: 005595ae (CONDITIONAL_JUMP)  ; LAB_005595ae
    MOV EAX,EBX                         ; 0055956d
        ;   Label: LAB_0055956d
    CMP EBX,0x34                        ; 0055956f
    JNC 0x005597db                      ; 00559572
        ;   XREF to: 005597db (CONDITIONAL_JUMP)  ; LAB_005597db
    CMP EBX,0x19                        ; 00559578
    JNC 0x00559a16                      ; 0055957b
        ;   XREF to: 00559a16 (CONDITIONAL_JUMP)  ; LAB_00559a16
    CMP EBX,0xc                         ; 00559581
    JNC 0x00559b06                      ; 00559584
        ;   XREF to: 00559b06 (CONDITIONAL_JUMP)  ; LAB_00559b06
    CMP EBX,0x6                         ; 0055958a
    JNC 0x00559b73                      ; 0055958d
        ;   XREF to: 00559b73 (CONDITIONAL_JUMP)  ; LAB_00559b73
    CMP EBX,0x3                         ; 00559593
    JNC 0x00559ba4                      ; 00559596
        ;   XREF to: 00559ba4 (CONDITIONAL_JUMP)  ; LAB_00559ba4
    CMP EBX,0x1                         ; 0055959c
    JC 0x005598a7                       ; 0055959f
        ;   XREF to: 005598a7 (CONDITIONAL_JUMP)  ; LAB_005598a7
    JA 0x005595d5                       ; 005595a5
        ;   XREF to: 005595d5 (CONDITIONAL_JUMP)  ; LAB_005595d5
    MOV EAX,0x597f5f                    ; 005595a7 | = "Esc"
    POP EBX                             ; 005595ac
    RET                                 ; 005595ad
    MOV EAX,EBX                         ; 005595ae
        ;   Label: LAB_005595ae
    PUSH 0xc8                           ; 005595b0
    AND EAX,0x1ff                       ; 005595b5
    PUSH 0x2de1fd0                      ; 005595ba
    SHL EAX,0x10                        ; 005595bf
    PUSH EAX                            ; 005595c2
    CALL dword ptr CS:[0x575434]        ; 005595c3 | PTR_GetKeyNameTextA_00575434
    TEST EAX,EAX                        ; 005595ca
    JLE 0x0055956d                      ; 005595cc
        ;   XREF to: 0055956d (CONDITIONAL_JUMP)  ; LAB_0055956d
    MOV EAX,0x2de1fd0                   ; 005595ce
    POP EBX                             ; 005595d3
    RET                                 ; 005595d4
    MOV EAX,0x597f63                    ; 005595d5 | = "1"
        ;   Label: LAB_005595d5
    POP EBX                             ; 005595da
    RET                                 ; 005595db
    MOV EAX,0x597f65                    ; 005595dc | = "2"
        ;   Label: LAB_005595dc
    POP EBX                             ; 005595e1
    RET                                 ; 005595e2
    MOV EAX,0x597f67                    ; 005595e3 | = "3"
        ;   Label: LAB_005595e3
    POP EBX                             ; 005595e8
    RET                                 ; 005595e9
    MOV EAX,0x597f6b                    ; 005595ea | = "5"
        ;   Label: LAB_005595ea
    POP EBX                             ; 005595ef
    RET                                 ; 005595f0
    MOV EAX,0x597f6d                    ; 005595f1 | = "6"
        ;   Label: LAB_005595f1
    POP EBX                             ; 005595f6
    RET                                 ; 005595f7
    MOV EAX,0x597f71                    ; 005595f8 | = "8"
        ;   Label: LAB_005595f8
    POP EBX                             ; 005595fd
    RET                                 ; 005595fe
    MOV EAX,0x597f73                    ; 005595ff | = "9"
        ;   Label: LAB_005595ff
    POP EBX                             ; 00559604
    RET                                 ; 00559605
    MOV EAX,0x597f77                    ; 00559606 | = "-"
        ;   Label: LAB_00559606
    POP EBX                             ; 0055960b
    RET                                 ; 0055960c
    MOV EAX,0x597f79                    ; 0055960d | = "="
        ;   Label: LAB_0055960d
    POP EBX                             ; 00559612
    RET                                 ; 00559613
    MOV EAX,0x597f85                    ; 00559614 | = "Tab"
        ;   Label: LAB_00559614
    POP EBX                             ; 00559619
    RET                                 ; 0055961a
    MOV EAX,0x597f89                    ; 0055961b | = "Q"
        ;   Label: LAB_0055961b
    POP EBX                             ; 00559620
    RET                                 ; 00559621
    MOV EAX,0x597f8d                    ; 00559622 | = "E"
        ;   Label: LAB_00559622
    POP EBX                             ; 00559627
    RET                                 ; 00559628
    MOV EAX,0x597f8f                    ; 00559629 | = "R"
        ;   Label: LAB_00559629
    POP EBX                             ; 0055962e
    RET                                 ; 0055962f
    MOV EAX,0x597f93                    ; 00559630 | = "Y"
        ;   Label: LAB_00559630
    POP EBX                             ; 00559635
    RET                                 ; 00559636
    MOV EAX,0x597f95                    ; 00559637 | = "U"
        ;   Label: LAB_00559637
    POP EBX                             ; 0055963c
    RET                                 ; 0055963d
    MOV EAX,0x597f97                    ; 0055963e | = "I"
        ;   Label: LAB_0055963e
    POP EBX                             ; 00559643
    RET                                 ; 00559644
    MOV EAX,0x597f9b                    ; 00559645 | = "P"
        ;   Label: LAB_00559645
    POP EBX                             ; 0055964a
    RET                                 ; 0055964b
    MOV EAX,0x597f9d                    ; 0055964c | = "["
        ;   Label: LAB_0055964c
    POP EBX                             ; 00559651
    RET                                 ; 00559652
    MOV EAX,0x597fa1                    ; 00559653 | = "Enter"
        ;   Label: LAB_00559653
    POP EBX                             ; 00559658
    RET                                 ; 00559659
    MOV EAX,0x597fa7                    ; 0055965a | = "LeftCtrl"
        ;   Label: LAB_0055965a
    POP EBX                             ; 0055965f
    RET                                 ; 00559660
    MOV EAX,0x597fb2                    ; 00559661 | = "S"
        ;   Label: LAB_00559661
    POP EBX                             ; 00559666
    RET                                 ; 00559667
    MOV EAX,0x597fb4                    ; 00559668 | = "D"
        ;   Label: LAB_00559668
    POP EBX                             ; 0055966d
    RET                                 ; 0055966e
    MOV EAX,0x597fb8                    ; 0055966f | = "G"
        ;   Label: LAB_0055966f
    POP EBX                             ; 00559674
    RET                                 ; 00559675
    MOV EAX,0x597fba                    ; 00559676 | = "H"
        ;   Label: LAB_00559676
    POP EBX                             ; 0055967b
    RET                                 ; 0055967c
    MOV EAX,0x597fbc                    ; 0055967d | = "J"
        ;   Label: LAB_0055967d
    POP EBX                             ; 00559682
    RET                                 ; 00559683
    MOV EAX,0x597fc0                    ; 00559684 | = "L"
        ;   Label: LAB_00559684
    POP EBX                             ; 00559689
    RET                                 ; 0055968a
    MOV EAX,0x597fc2                    ; 0055968b | = ";"
        ;   Label: LAB_0055968b
    POP EBX                             ; 00559690
    RET                                 ; 00559691
    MOV EAX,0x597fc6                    ; 00559692 | = "`"
        ;   Label: LAB_00559692
    POP EBX                             ; 00559697
    RET                                 ; 00559698
    MOV EAX,0x597fc8                    ; 00559699 | = "LeftShift"
        ;   Label: LAB_00559699
    POP EBX                             ; 0055969e
    RET                                 ; 0055969f
    MOV EAX,0x597fd2                    ; 005596a0 | = "Z"
        ;   Label: LAB_005596a0
    POP EBX                             ; 005596a5
    RET                                 ; 005596a6
    MOV EAX,0x597fd4                    ; 005596a7 | = "X"
        ;   Label: LAB_005596a7
    POP EBX                             ; 005596ac
    RET                                 ; 005596ad
    MOV EAX,0x597fd6                    ; 005596ae | = "C"
        ;   Label: LAB_005596ae
    POP EBX                             ; 005596b3
    RET                                 ; 005596b4
    MOV EAX,0x597fda                    ; 005596b5 | = "B"
        ;   Label: LAB_005596b5
    POP EBX                             ; 005596ba
    RET                                 ; 005596bb
    MOV EAX,0x597fdc                    ; 005596bc | = "N"
        ;   Label: LAB_005596bc
    POP EBX                             ; 005596c1
    RET                                 ; 005596c2
    MOV EAX,0x597fde                    ; 005596c3 | = "M"
        ;   Label: LAB_005596c3
    POP EBX                             ; 005596c8
    RET                                 ; 005596c9
    MOV EAX,0x597fe2                    ; 005596ca | = "."
        ;   Label: LAB_005596ca
    POP EBX                             ; 005596cf
    RET                                 ; 005596d0
    MOV EAX,0x597fe4                    ; 005596d1 | = "/"
        ;   Label: LAB_005596d1
    POP EBX                             ; 005596d6
    RET                                 ; 005596d7
    MOV EAX,0x597ff1                    ; 005596d8 | = "NumPad*"
        ;   Label: LAB_005596d8
    POP EBX                             ; 005596dd
    RET                                 ; 005596de
    MOV EAX,0x597ff9                    ; 005596df | = "LeftAlt"
        ;   Label: LAB_005596df
    POP EBX                             ; 005596e4
    RET                                 ; 005596e5
    MOV EAX,0x598007                    ; 005596e6 | = "CapsLock"
        ;   Label: LAB_005596e6
    POP EBX                             ; 005596eb
    RET                                 ; 005596ec
    MOV EAX,0x598010                    ; 005596ed | = "F1"
        ;   Label: LAB_005596ed
    POP EBX                             ; 005596f2
    RET                                 ; 005596f3
    MOV EAX,0x598016                    ; 005596f4 | = "F3"
        ;   Label: LAB_005596f4
    POP EBX                             ; 005596f9
    RET                                 ; 005596fa
    MOV EAX,0x598019                    ; 005596fb | = "F4"
        ;   Label: LAB_005596fb
    POP EBX                             ; 00559700
    RET                                 ; 00559701
    MOV EAX,0x59801f                    ; 00559702 | = "F6"
        ;   Label: LAB_00559702
    POP EBX                             ; 00559707
    RET                                 ; 00559708
    MOV EAX,0x598022                    ; 00559709 | = "F7"
        ;   Label: LAB_00559709
    POP EBX                             ; 0055970e
    RET                                 ; 0055970f
    MOV EAX,0x598028                    ; 00559710 | = "F9"
        ;   Label: LAB_00559710
    POP EBX                             ; 00559715
    RET                                 ; 00559716
    MOV EAX,0x59802b                    ; 00559717 | = "F10"
        ;   Label: LAB_00559717
    POP EBX                             ; 0055971c
    RET                                 ; 0055971d
    MOV EAX,0x598035                    ; 0055971e | = "ScrollLock"
        ;   Label: LAB_0055971e
    POP EBX                             ; 00559723
    RET                                 ; 00559724
    MOV EAX,0x598040                    ; 00559725 | = "NumPad7"
        ;   Label: LAB_00559725
    POP EBX                             ; 0055972a
    RET                                 ; 0055972b
    MOV EAX,0x598050                    ; 0055972c | = "NumPad9"
        ;   Label: LAB_0055972c
    POP EBX                             ; 00559731
    RET                                 ; 00559732
    MOV EAX,0x598058                    ; 00559733 | = "NumPad-"
        ;   Label: LAB_00559733
    POP EBX                             ; 00559738
    RET                                 ; 00559739
    MOV EAX,0x598060                    ; 0055973a | = "NumPad4"
        ;   Label: LAB_0055973a
    POP EBX                             ; 0055973f
    RET                                 ; 00559740
    MOV EAX,0x598070                    ; 00559741 | = "NumPad6"
        ;   Label: LAB_00559741
    POP EBX                             ; 00559746
    RET                                 ; 00559747
    MOV EAX,0x598078                    ; 00559748 | = "NumPad+"
        ;   Label: LAB_00559748
    POP EBX                             ; 0055974d
    RET                                 ; 0055974e
    MOV EAX,0x598088                    ; 0055974f | = "NumPad2"
        ;   Label: LAB_0055974f
    POP EBX                             ; 00559754
    RET                                 ; 00559755
    MOV EAX,0x598090                    ; 00559756 | = "NumPad3"
        ;   Label: LAB_00559756
    POP EBX                             ; 0055975b
    RET                                 ; 0055975c
    MOV EAX,0x5980a0                    ; 0055975d | = "NumPad."
        ;   Label: LAB_0055975d
    POP EBX                             ; 00559762
    RET                                 ; 00559763
    MOV EAX,0x5980a8                    ; 00559764 | = "F11"
        ;   Label: LAB_00559764
    POP EBX                             ; 00559769
    RET                                 ; 0055976a
    MOV EAX,0x5980ac                    ; 0055976b | = "F12"
        ;   Label: LAB_0055976b
    POP EBX                             ; 00559770
    RET                                 ; 00559771
    MOV EAX,0x5980b0                    ; 00559772 | = "NumPadEnter"
        ;   Label: LAB_00559772
    POP EBX                             ; 00559777
    RET                                 ; 00559778
    MOV EAX,0x5980bc                    ; 00559779 | = "RightCtrl"
        ;   Label: LAB_00559779
    POP EBX                             ; 0055977e
    RET                                 ; 0055977f
    MOV EAX,0x5980c6                    ; 00559780 | = "NumPad/"
        ;   Label: LAB_00559780
    POP EBX                             ; 00559785
    RET                                 ; 00559786
    MOV EAX,0x5980ce                    ; 00559787 | = "RightAlt"
        ;   Label: LAB_00559787
    POP EBX                             ; 0055978c
    RET                                 ; 0055978d
    MOV EAX,0x5980d7                    ; 0055978e | = "NumLock"
        ;   Label: LAB_0055978e
    POP EBX                             ; 00559793
    RET                                 ; 00559794
    MOV EAX,0x5980df                    ; 00559795 | = "Home"
        ;   Label: LAB_00559795
    POP EBX                             ; 0055979a
    RET                                 ; 0055979b
    MOV EAX,0x5980e7                    ; 0055979c | = "PgUp"
        ;   Label: LAB_0055979c
    POP EBX                             ; 005597a1
    RET                                 ; 005597a2
    MOV EAX,0x5980ec                    ; 005597a3 | = "Left"
        ;   Label: LAB_005597a3
    POP EBX                             ; 005597a8
    RET                                 ; 005597a9
    MOV EAX,0x5980f1                    ; 005597aa | = "Right"
        ;   Label: LAB_005597aa
    POP EBX                             ; 005597af
    RET                                 ; 005597b0
    MOV EAX,0x5980f7                    ; 005597b1 | = "End"
        ;   Label: LAB_005597b1
    POP EBX                             ; 005597b6
    RET                                 ; 005597b7
    MOV EAX,0x5980fb                    ; 005597b8 | = "Down"
        ;   Label: LAB_005597b8
    POP EBX                             ; 005597bd
    RET                                 ; 005597be
    MOV EAX,0x598105                    ; 005597bf | = "Ins"
        ;   Label: LAB_005597bf
    POP EBX                             ; 005597c4
    RET                                 ; 005597c5
    MOV EAX,0x598109                    ; 005597c6 | = "Del"
        ;   Label: LAB_005597c6
    POP EBX                             ; 005597cb
    RET                                 ; 005597cc
    MOV EAX,0x59810d                    ; 005597cd | = "Left Mouse Button"
        ;   Label: LAB_005597cd
    POP EBX                             ; 005597d2
    RET                                 ; 005597d3
    MOV EAX,0x59811f                    ; 005597d4 | = "Right Mouse Button"
        ;   Label: LAB_005597d4
    POP EBX                             ; 005597d9
    RET                                 ; 005597da
    JBE 0x005596ca                      ; 005597db
        ;   XREF to: 005596ca (CONDITIONAL_JUMP)  ; LAB_005596ca
        ;   Label: LAB_005597db
    CMP EBX,0x4d                        ; 005597e1
    JNC 0x00559811                      ; 005597e4
        ;   XREF to: 00559811 (CONDITIONAL_JUMP)  ; LAB_00559811
    CMP EBX,0x40                        ; 005597e6
    JNC 0x00559962                      ; 005597e9
        ;   XREF to: 00559962 (CONDITIONAL_JUMP)  ; LAB_00559962
    CMP EBX,0x3a                        ; 005597ef
    JNC 0x005599cf                      ; 005597f2
        ;   XREF to: 005599cf (CONDITIONAL_JUMP)  ; LAB_005599cf
    CMP EBX,0x37                        ; 005597f8
    JNC 0x00559a00                      ; 005597fb
        ;   XREF to: 00559a00 (CONDITIONAL_JUMP)  ; LAB_00559a00
    CMP EBX,0x35                        ; 00559801
    JBE 0x005596d1                      ; 00559804
        ;   XREF to: 005596d1 (CONDITIONAL_JUMP)  ; LAB_005596d1
    MOV EAX,0x597fe6                    ; 0055980a | = "RightShift"
    POP EBX                             ; 0055980f
    RET                                 ; 00559810
    JBE 0x00559741                      ; 00559811
        ;   XREF to: 00559741 (CONDITIONAL_JUMP)  ; LAB_00559741
        ;   Label: LAB_00559811
    CMP EBX,0x145                       ; 00559817
    JNC 0x00559841                      ; 0055981d
        ;   XREF to: 00559841 (CONDITIONAL_JUMP)  ; LAB_00559841
    CMP EBX,0x53                        ; 0055981f
    JNC 0x005598e9                      ; 00559822
        ;   XREF to: 005598e9 (CONDITIONAL_JUMP)  ; LAB_005598e9
    CMP EBX,0x50                        ; 00559828
    JNC 0x0055994c                      ; 0055982b
        ;   XREF to: 0055994c (CONDITIONAL_JUMP)  ; LAB_0055994c
    CMP EBX,0x4e                        ; 00559831
    JBE 0x00559748                      ; 00559834
        ;   XREF to: 00559748 (CONDITIONAL_JUMP)  ; LAB_00559748
    MOV EAX,0x598080                    ; 0055983a | = "NumPad1"
    POP EBX                             ; 0055983f
    RET                                 ; 00559840
    JBE 0x0055978e                      ; 00559841
        ;   XREF to: 0055978e (CONDITIONAL_JUMP)  ; LAB_0055978e
        ;   Label: LAB_00559841
    CMP EBX,0x14f                       ; 00559847
    JNC 0x0055986c                      ; 0055984d
        ;   XREF to: 0055986c (CONDITIONAL_JUMP)  ; LAB_0055986c
    CMP EBX,0x149                       ; 0055984f
    JNC 0x005598c2                      ; 00559855
        ;   XREF to: 005598c2 (CONDITIONAL_JUMP)  ; LAB_005598c2
    CMP EBX,0x147                       ; 00559857
    JC 0x005598a7                       ; 0055985d
        ;   XREF to: 005598a7 (CONDITIONAL_JUMP)  ; LAB_005598a7
    JBE 0x00559795                      ; 0055985f
        ;   XREF to: 00559795 (CONDITIONAL_JUMP)  ; LAB_00559795
    MOV EAX,0x5980e4                    ; 00559865 | = "Up"
    POP EBX                             ; 0055986a
    RET                                 ; 0055986b
    JBE 0x005597b1                      ; 0055986c
        ;   XREF to: 005597b1 (CONDITIONAL_JUMP)  ; LAB_005597b1
        ;   Label: LAB_0055986c
    CMP EBX,0x152                       ; 00559872
    JNC 0x0055988d                      ; 00559878
        ;   XREF to: 0055988d (CONDITIONAL_JUMP)  ; LAB_0055988d
    CMP EBX,0x150                       ; 0055987a
    JBE 0x005597b8                      ; 00559880
        ;   XREF to: 005597b8 (CONDITIONAL_JUMP)  ; LAB_005597b8
    MOV EAX,0x598100                    ; 00559886 | = "PgDn"
    POP EBX                             ; 0055988b
    RET                                 ; 0055988c
    JBE 0x005597bf                      ; 0055988d
        ;   XREF to: 005597bf (CONDITIONAL_JUMP)  ; LAB_005597bf
        ;   Label: LAB_0055988d
    CMP EBX,0x200                       ; 00559893
    JNC 0x005598ae                      ; 00559899
        ;   XREF to: 005598ae (CONDITIONAL_JUMP)  ; LAB_005598ae
    CMP EBX,0x153                       ; 0055989b
    JZ 0x005597c6                       ; 005598a1
        ;   XREF to: 005597c6 (CONDITIONAL_JUMP)  ; LAB_005597c6
    MOV EAX,0x598132                    ; 005598a7 | = "(invalid key)"
        ;   Label: LAB_005598a7
    POP EBX                             ; 005598ac
    RET                                 ; 005598ad
    JBE 0x005597cd                      ; 005598ae
        ;   XREF to: 005597cd (CONDITIONAL_JUMP)  ; LAB_005597cd
        ;   Label: LAB_005598ae
    CMP EBX,0x201                       ; 005598b4
    JZ 0x005597d4                       ; 005598ba
        ;   XREF to: 005597d4 (CONDITIONAL_JUMP)  ; LAB_005597d4
    JMP 0x005598a7                      ; 005598c0
        ;   XREF to: 005598a7 (UNCONDITIONAL_JUMP)  ; LAB_005598a7
    JBE 0x0055979c                      ; 005598c2
        ;   XREF to: 0055979c (CONDITIONAL_JUMP)  ; LAB_0055979c
        ;   Label: LAB_005598c2
    CMP EBX,0x14b                       ; 005598c8
    JC 0x005598a7                       ; 005598ce
        ;   XREF to: 005598a7 (CONDITIONAL_JUMP)  ; LAB_005598a7
    JBE 0x005597a3                      ; 005598d0
        ;   XREF to: 005597a3 (CONDITIONAL_JUMP)  ; LAB_005597a3
    CMP EBX,0x14d                       ; 005598d6
    JZ 0x005597aa                       ; 005598dc
        ;   XREF to: 005597aa (CONDITIONAL_JUMP)  ; LAB_005597aa
    MOV EAX,0x598132                    ; 005598e2 | = "(invalid key)"
    POP EBX                             ; 005598e7
    RET                                 ; 005598e8
    JBE 0x0055975d                      ; 005598e9
        ;   XREF to: 0055975d (CONDITIONAL_JUMP)  ; LAB_0055975d
        ;   Label: LAB_005598e9
    CMP EBX,0x11c                       ; 005598ef
    JNC 0x00559912                      ; 005598f5
        ;   XREF to: 00559912 (CONDITIONAL_JUMP)  ; LAB_00559912
    CMP EBX,0x57                        ; 005598f7
    JC 0x005598a7                       ; 005598fa
        ;   XREF to: 005598a7 (CONDITIONAL_JUMP)  ; LAB_005598a7
    JBE 0x00559764                      ; 005598fc
        ;   XREF to: 00559764 (CONDITIONAL_JUMP)  ; LAB_00559764
    CMP EBX,0x58                        ; 00559902
    JZ 0x0055976b                       ; 00559905
        ;   XREF to: 0055976b (CONDITIONAL_JUMP)  ; LAB_0055976b
    MOV EAX,0x598132                    ; 0055990b | = "(invalid key)"
    POP EBX                             ; 00559910
    RET                                 ; 00559911
    JBE 0x00559772                      ; 00559912
        ;   XREF to: 00559772 (CONDITIONAL_JUMP)  ; LAB_00559772
        ;   Label: LAB_00559912
    CMP EBX,0x135                       ; 00559918
    JNC 0x00559933                      ; 0055991e
        ;   XREF to: 00559933 (CONDITIONAL_JUMP)  ; LAB_00559933
    CMP EBX,0x11d                       ; 00559920
    JZ 0x00559779                       ; 00559926
        ;   XREF to: 00559779 (CONDITIONAL_JUMP)  ; LAB_00559779
    MOV EAX,0x598132                    ; 0055992c | = "(invalid key)"
    POP EBX                             ; 00559931
    RET                                 ; 00559932
    JBE 0x00559780                      ; 00559933
        ;   XREF to: 00559780 (CONDITIONAL_JUMP)  ; LAB_00559780
        ;   Label: LAB_00559933
    CMP EBX,0x138                       ; 00559939
    JZ 0x00559787                       ; 0055993f
        ;   XREF to: 00559787 (CONDITIONAL_JUMP)  ; LAB_00559787
    MOV EAX,0x598132                    ; 00559945 | = "(invalid key)"
    POP EBX                             ; 0055994a
    RET                                 ; 0055994b
    JBE 0x0055974f                      ; 0055994c
        ;   XREF to: 0055974f (CONDITIONAL_JUMP)  ; LAB_0055974f
        ;   Label: LAB_0055994c
    CMP EBX,0x51                        ; 00559952
    JBE 0x00559756                      ; 00559955
        ;   XREF to: 00559756 (CONDITIONAL_JUMP)  ; LAB_00559756
    MOV EAX,0x598098                    ; 0055995b | = "NumPad0"
    POP EBX                             ; 00559960
    RET                                 ; 00559961
    JBE 0x00559702                      ; 00559962
        ;   XREF to: 00559702 (CONDITIONAL_JUMP)  ; LAB_00559702
        ;   Label: LAB_00559962
    CMP EBX,0x46                        ; 00559968
    JNC 0x00559982                      ; 0055996b
        ;   XREF to: 00559982 (CONDITIONAL_JUMP)  ; LAB_00559982
    CMP EBX,0x43                        ; 0055996d
    JNC 0x005599b9                      ; 00559970
        ;   XREF to: 005599b9 (CONDITIONAL_JUMP)  ; LAB_005599b9
    CMP EBX,0x41                        ; 00559972
    JBE 0x00559709                      ; 00559975
        ;   XREF to: 00559709 (CONDITIONAL_JUMP)  ; LAB_00559709
    MOV EAX,0x598025                    ; 0055997b | = "F8"
    POP EBX                             ; 00559980
    RET                                 ; 00559981
    JBE 0x0055971e                      ; 00559982
        ;   XREF to: 0055971e (CONDITIONAL_JUMP)  ; LAB_0055971e
        ;   Label: LAB_00559982
    CMP EBX,0x49                        ; 00559988
    JNC 0x0055999d                      ; 0055998b
        ;   XREF to: 0055999d (CONDITIONAL_JUMP)  ; LAB_0055999d
    CMP EBX,0x47                        ; 0055998d
    JBE 0x00559725                      ; 00559990
        ;   XREF to: 00559725 (CONDITIONAL_JUMP)  ; LAB_00559725
    MOV EAX,0x598048                    ; 00559996 | = "NumPad8"
    POP EBX                             ; 0055999b
    RET                                 ; 0055999c
    JBE 0x0055972c                      ; 0055999d
        ;   XREF to: 0055972c (CONDITIONAL_JUMP)  ; LAB_0055972c
        ;   Label: LAB_0055999d
    CMP EBX,0x4b                        ; 005599a3
    JC 0x00559733                       ; 005599a6
        ;   XREF to: 00559733 (CONDITIONAL_JUMP)  ; LAB_00559733
    JBE 0x0055973a                      ; 005599ac
        ;   XREF to: 0055973a (CONDITIONAL_JUMP)  ; LAB_0055973a
    MOV EAX,0x598068                    ; 005599b2 | = "NumPad5"
    POP EBX                             ; 005599b7
    RET                                 ; 005599b8
    JBE 0x00559710                      ; 005599b9
        ;   XREF to: 00559710 (CONDITIONAL_JUMP)  ; LAB_00559710
        ;   Label: LAB_005599b9
    CMP EBX,0x44                        ; 005599bf
    JBE 0x00559717                      ; 005599c2
        ;   XREF to: 00559717 (CONDITIONAL_JUMP)  ; LAB_00559717
    MOV EAX,0x59802f                    ; 005599c8 | = "Pause"
    POP EBX                             ; 005599cd
    RET                                 ; 005599ce
    JBE 0x005596e6                      ; 005599cf
        ;   XREF to: 005596e6 (CONDITIONAL_JUMP)  ; LAB_005596e6
        ;   Label: LAB_005599cf
    CMP EBX,0x3d                        ; 005599d5
    JNC 0x005599ea                      ; 005599d8
        ;   XREF to: 005599ea (CONDITIONAL_JUMP)  ; LAB_005599ea
    CMP EBX,0x3b                        ; 005599da
    JBE 0x005596ed                      ; 005599dd
        ;   XREF to: 005596ed (CONDITIONAL_JUMP)  ; LAB_005596ed
    MOV EAX,0x598013                    ; 005599e3 | = "F2"
    POP EBX                             ; 005599e8
    RET                                 ; 005599e9
    JBE 0x005596f4                      ; 005599ea
        ;   XREF to: 005596f4 (CONDITIONAL_JUMP)  ; LAB_005596f4
        ;   Label: LAB_005599ea
    CMP EBX,0x3e                        ; 005599f0
    JBE 0x005596fb                      ; 005599f3
        ;   XREF to: 005596fb (CONDITIONAL_JUMP)  ; LAB_005596fb
    MOV EAX,0x59801c                    ; 005599f9 | = "F5"
    POP EBX                             ; 005599fe
    RET                                 ; 005599ff
    JBE 0x005596d8                      ; 00559a00
        ;   XREF to: 005596d8 (CONDITIONAL_JUMP)  ; LAB_005596d8
        ;   Label: LAB_00559a00
    CMP EBX,0x38                        ; 00559a06
    JBE 0x005596df                      ; 00559a09
        ;   XREF to: 005596df (CONDITIONAL_JUMP)  ; LAB_005596df
    MOV EAX,0x598001                    ; 00559a0f | = "Space"
    POP EBX                             ; 00559a14
    RET                                 ; 00559a15
    JBE 0x00559645                      ; 00559a16
        ;   XREF to: 00559645 (CONDITIONAL_JUMP)  ; LAB_00559645
        ;   Label: LAB_00559a16
    CMP EBX,0x26                        ; 00559a1c
    JNC 0x00559a43                      ; 00559a1f
        ;   XREF to: 00559a43 (CONDITIONAL_JUMP)  ; LAB_00559a43
    CMP EBX,0x1f                        ; 00559a21
    JNC 0x00559ab9                      ; 00559a24
        ;   XREF to: 00559ab9 (CONDITIONAL_JUMP)  ; LAB_00559ab9
    CMP EBX,0x1c                        ; 00559a2a
    JNC 0x00559af0                      ; 00559a2d
        ;   XREF to: 00559af0 (CONDITIONAL_JUMP)  ; LAB_00559af0
    CMP EBX,0x1a                        ; 00559a33
    JBE 0x0055964c                      ; 00559a36
        ;   XREF to: 0055964c (CONDITIONAL_JUMP)  ; LAB_0055964c
    MOV EAX,0x597f9f                    ; 00559a3c | = "]"
    POP EBX                             ; 00559a41
    RET                                 ; 00559a42
    JBE 0x00559684                      ; 00559a43
        ;   XREF to: 00559684 (CONDITIONAL_JUMP)  ; LAB_00559684
        ;   Label: LAB_00559a43
    CMP EBX,0x2d                        ; 00559a49
    JNC 0x00559a63                      ; 00559a4c
        ;   XREF to: 00559a63 (CONDITIONAL_JUMP)  ; LAB_00559a63
    CMP EBX,0x29                        ; 00559a4e
    JNC 0x00559a9a                      ; 00559a51
        ;   XREF to: 00559a9a (CONDITIONAL_JUMP)  ; LAB_00559a9a
    CMP EBX,0x27                        ; 00559a53
    JBE 0x0055968b                      ; 00559a56
        ;   XREF to: 0055968b (CONDITIONAL_JUMP)  ; LAB_0055968b
    MOV EAX,0x597fc4                    ; 00559a5c | = "'"
    POP EBX                             ; 00559a61
    RET                                 ; 00559a62
    JBE 0x005596a7                      ; 00559a63
        ;   XREF to: 005596a7 (CONDITIONAL_JUMP)  ; LAB_005596a7
        ;   Label: LAB_00559a63
    CMP EBX,0x30                        ; 00559a69
    JNC 0x00559a7e                      ; 00559a6c
        ;   XREF to: 00559a7e (CONDITIONAL_JUMP)  ; LAB_00559a7e
    CMP EBX,0x2e                        ; 00559a6e
    JBE 0x005596ae                      ; 00559a71
        ;   XREF to: 005596ae (CONDITIONAL_JUMP)  ; LAB_005596ae
    MOV EAX,0x597fd8                    ; 00559a77 | = "V"
    POP EBX                             ; 00559a7c
    RET                                 ; 00559a7d
    JBE 0x005596b5                      ; 00559a7e
        ;   XREF to: 005596b5 (CONDITIONAL_JUMP)  ; LAB_005596b5
        ;   Label: LAB_00559a7e
    CMP EBX,0x32                        ; 00559a84
    JC 0x005596bc                       ; 00559a87
        ;   XREF to: 005596bc (CONDITIONAL_JUMP)  ; LAB_005596bc
    JBE 0x005596c3                      ; 00559a8d
        ;   XREF to: 005596c3 (CONDITIONAL_JUMP)  ; LAB_005596c3
    MOV EAX,0x597fe0                    ; 00559a93 | = ","
    POP EBX                             ; 00559a98
    RET                                 ; 00559a99
    JBE 0x00559692                      ; 00559a9a
        ;   XREF to: 00559692 (CONDITIONAL_JUMP)  ; LAB_00559692
        ;   Label: LAB_00559a9a
    CMP EBX,0x2a                        ; 00559aa0
    JBE 0x00559699                      ; 00559aa3
        ;   XREF to: 00559699 (CONDITIONAL_JUMP)  ; LAB_00559699
    CMP EBX,0x2c                        ; 00559aa9
    JZ 0x005596a0                       ; 00559aac
        ;   XREF to: 005596a0 (CONDITIONAL_JUMP)  ; LAB_005596a0
    MOV EAX,0x598132                    ; 00559ab2 | = "(invalid key)"
    POP EBX                             ; 00559ab7
    RET                                 ; 00559ab8
    JBE 0x00559661                      ; 00559ab9
        ;   XREF to: 00559661 (CONDITIONAL_JUMP)  ; LAB_00559661
        ;   Label: LAB_00559ab9
    CMP EBX,0x22                        ; 00559abf
    JNC 0x00559ad4                      ; 00559ac2
        ;   XREF to: 00559ad4 (CONDITIONAL_JUMP)  ; LAB_00559ad4
    CMP EBX,0x20                        ; 00559ac4
    JBE 0x00559668                      ; 00559ac7
        ;   XREF to: 00559668 (CONDITIONAL_JUMP)  ; LAB_00559668
    MOV EAX,0x597fb6                    ; 00559acd | = "F"
    POP EBX                             ; 00559ad2
    RET                                 ; 00559ad3
    JBE 0x0055966f                      ; 00559ad4
        ;   XREF to: 0055966f (CONDITIONAL_JUMP)  ; LAB_0055966f
        ;   Label: LAB_00559ad4
    CMP EBX,0x24                        ; 00559ada
    JC 0x00559676                       ; 00559add
        ;   XREF to: 00559676 (CONDITIONAL_JUMP)  ; LAB_00559676
    JBE 0x0055967d                      ; 00559ae3
        ;   XREF to: 0055967d (CONDITIONAL_JUMP)  ; LAB_0055967d
    MOV EAX,0x597fbe                    ; 00559ae9 | = "K"
    POP EBX                             ; 00559aee
    RET                                 ; 00559aef
    JBE 0x00559653                      ; 00559af0
        ;   XREF to: 00559653 (CONDITIONAL_JUMP)  ; LAB_00559653
        ;   Label: LAB_00559af0
    CMP EBX,0x1d                        ; 00559af6
    JBE 0x0055965a                      ; 00559af9
        ;   XREF to: 0055965a (CONDITIONAL_JUMP)  ; LAB_0055965a
    MOV EAX,0x597fb0                    ; 00559aff | = "A"
    POP EBX                             ; 00559b04
    RET                                 ; 00559b05
    JBE 0x00559606                      ; 00559b06
        ;   XREF to: 00559606 (CONDITIONAL_JUMP)  ; LAB_00559606
        ;   Label: LAB_00559b06
    CMP EBX,0x12                        ; 00559b0c
    JNC 0x00559b26                      ; 00559b0f
        ;   XREF to: 00559b26 (CONDITIONAL_JUMP)  ; LAB_00559b26
    CMP EBX,0xf                         ; 00559b11
    JNC 0x00559b5d                      ; 00559b14
        ;   XREF to: 00559b5d (CONDITIONAL_JUMP)  ; LAB_00559b5d
    CMP EBX,0xd                         ; 00559b16
    JBE 0x0055960d                      ; 00559b19
        ;   XREF to: 0055960d (CONDITIONAL_JUMP)  ; LAB_0055960d
    MOV EAX,0x597f7b                    ; 00559b1f | = "BackSpace"
    POP EBX                             ; 00559b24
    RET                                 ; 00559b25
    JBE 0x00559622                      ; 00559b26
        ;   XREF to: 00559622 (CONDITIONAL_JUMP)  ; LAB_00559622
        ;   Label: LAB_00559b26
    CMP EBX,0x15                        ; 00559b2c
    JNC 0x00559b41                      ; 00559b2f
        ;   XREF to: 00559b41 (CONDITIONAL_JUMP)  ; LAB_00559b41
    CMP EBX,0x13                        ; 00559b31
    JBE 0x00559629                      ; 00559b34
        ;   XREF to: 00559629 (CONDITIONAL_JUMP)  ; LAB_00559629
    MOV EAX,0x597f91                    ; 00559b3a | = "T"
    POP EBX                             ; 00559b3f
    RET                                 ; 00559b40
    JBE 0x00559630                      ; 00559b41
        ;   XREF to: 00559630 (CONDITIONAL_JUMP)  ; LAB_00559630
        ;   Label: LAB_00559b41
    CMP EBX,0x17                        ; 00559b47
    JC 0x00559637                       ; 00559b4a
        ;   XREF to: 00559637 (CONDITIONAL_JUMP)  ; LAB_00559637
    JBE 0x0055963e                      ; 00559b50
        ;   XREF to: 0055963e (CONDITIONAL_JUMP)  ; LAB_0055963e
    MOV EAX,0x597f99                    ; 00559b56 | = "O"
    POP EBX                             ; 00559b5b
    RET                                 ; 00559b5c
    JBE 0x00559614                      ; 00559b5d
        ;   XREF to: 00559614 (CONDITIONAL_JUMP)  ; LAB_00559614
        ;   Label: LAB_00559b5d
    CMP EBX,0x10                        ; 00559b63
    JBE 0x0055961b                      ; 00559b66
        ;   XREF to: 0055961b (CONDITIONAL_JUMP)  ; LAB_0055961b
    MOV EAX,0x597f8b                    ; 00559b6c | = "W"
    POP EBX                             ; 00559b71
    RET                                 ; 00559b72
    JBE 0x005595ea                      ; 00559b73
        ;   XREF to: 005595ea (CONDITIONAL_JUMP)  ; LAB_005595ea
        ;   Label: LAB_00559b73
    CMP EBX,0x9                         ; 00559b79
    JNC 0x00559b8e                      ; 00559b7c
        ;   XREF to: 00559b8e (CONDITIONAL_JUMP)  ; LAB_00559b8e
    CMP EBX,0x7                         ; 00559b7e
    JBE 0x005595f1                      ; 00559b81
        ;   XREF to: 005595f1 (CONDITIONAL_JUMP)  ; LAB_005595f1
    MOV EAX,0x597f6f                    ; 00559b87 | = "7"
    POP EBX                             ; 00559b8c
    RET                                 ; 00559b8d
    JBE 0x005595f8                      ; 00559b8e
        ;   XREF to: 005595f8 (CONDITIONAL_JUMP)  ; LAB_005595f8
        ;   Label: LAB_00559b8e
    CMP EBX,0xa                         ; 00559b94
    JBE 0x005595ff                      ; 00559b97
        ;   XREF to: 005595ff (CONDITIONAL_JUMP)  ; LAB_005595ff
    MOV EAX,0x597f75                    ; 00559b9d | = "0"
    POP EBX                             ; 00559ba2
    RET                                 ; 00559ba3
    JBE 0x005595dc                      ; 00559ba4
        ;   XREF to: 005595dc (CONDITIONAL_JUMP)  ; LAB_005595dc
        ;   Label: LAB_00559ba4
    CMP EBX,0x4                         ; 00559baa
    JBE 0x005595e3                      ; 00559bad
        ;   XREF to: 005595e3 (CONDITIONAL_JUMP)  ; LAB_005595e3
    MOV EAX,0x597f69                    ; 00559bb3 | = "4"
    POP EBX                             ; 00559bb8
    RET                                 ; 00559bb9

