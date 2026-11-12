; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_spawner_cpp_FUN_00564010(void)
;
;
; XREF[2]:
;   engine_special.cpp_kill_FUN_005657f0 at 00565805
;   engine_special.cpp_loadExternalRenderer_FUN_00564be0 at 0056558d
;
; Referenced Globals:
;   undefined4 DAT_01c6cee8
;   undefined4 DAT_02cf5fe4
;   undefined4 DAT_02cf5fe8
;   undefined4 DAT_02cf5fec
;   undefined4 DAT_02cf5ff0
;   undefined4 DAT_02cf5ff4
;   undefined4 DAT_02cf5ff8
;   undefined4 DAT_02cf5ffc
;   undefined4 DAT_02cf6000
;   undefined4 DAT_02cf6004
;   undefined4 DAT_02cf6008
;   undefined4 DAT_02cf600c
;   undefined4 DAT_02cf6010
;   undefined4 DAT_02cf601c
;   undefined4 DAT_02cf6020
;   ... and 59 more
;
; Called Functions:
;   wincore_wddvmem.cpp_freeLibrary_FUN_0057ad00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00564010
        ;   Label: core_spawner.cpp_FUN_00564010
    PUSH EBP                            ; 00564011
    XOR EDX,EDX                         ; 00564012
    MOV EBX,dword ptr [0x02cf610c]      ; 00564014 | DAT_02cf610c
    MOV dword ptr [0x01c6cee8],EDX      ; 0056401a | DAT_01c6cee8
    MOV dword ptr [0x02cf6108],EDX      ; 00564020 | DAT_02cf6108
    TEST EBX,EBX                        ; 00564026
    JNZ 0x005641dd                      ; 00564028
        ;   XREF to: 005641dd (CONDITIONAL_JUMP)  ; LAB_005641dd
    XOR EBP,EBP                         ; 0056402e
        ;   Label: LAB_0056402e
    MOV dword ptr [0x02cf5fe8],EBP      ; 00564030 | DAT_02cf5fe8
    MOV dword ptr [0x02cf5fec],EBP      ; 00564036 | DAT_02cf5fec
    MOV dword ptr [0x02cf5ff0],EBP      ; 0056403c | DAT_02cf5ff0
    MOV dword ptr [0x02cf5ff4],EBP      ; 00564042 | DAT_02cf5ff4
    MOV dword ptr [0x02cf5ff8],EBP      ; 00564048 | DAT_02cf5ff8
    MOV dword ptr [0x02cf5ffc],EBP      ; 0056404e | DAT_02cf5ffc
    MOV dword ptr [0x02cf6000],EBP      ; 00564054 | DAT_02cf6000
    MOV dword ptr [0x02cf6004],EBP      ; 0056405a | DAT_02cf6004
    MOV dword ptr [0x02cf6008],EBP      ; 00564060 | DAT_02cf6008
    MOV dword ptr [0x02cf600c],EBP      ; 00564066 | DAT_02cf600c
    MOV dword ptr [0x02cf6010],EBP      ; 0056406c | DAT_02cf6010
    MOV dword ptr [0x02cf601c],EBP      ; 00564072 | DAT_02cf601c
    MOV dword ptr [0x02cf6020],EBP      ; 00564078 | DAT_02cf6020
    MOV dword ptr [0x02cf6024],EBP      ; 0056407e | DAT_02cf6024
    MOV dword ptr [0x02cf6028],EBP      ; 00564084 | DAT_02cf6028
    MOV dword ptr [0x02cf602c],EBP      ; 0056408a | DAT_02cf602c
    MOV dword ptr [0x02cf6030],EBP      ; 00564090 | DAT_02cf6030
    MOV dword ptr [0x02cf6034],EBP      ; 00564096 | DAT_02cf6034
    MOV dword ptr [0x02cf6038],EBP      ; 0056409c | DAT_02cf6038
    MOV dword ptr [0x02cf603c],EBP      ; 005640a2 | DAT_02cf603c
    MOV dword ptr [0x02cf6040],EBP      ; 005640a8 | DAT_02cf6040
    MOV dword ptr [0x02cf6044],EBP      ; 005640ae | DAT_02cf6044
    MOV dword ptr [0x02cf6048],EBP      ; 005640b4 | DAT_02cf6048
    MOV dword ptr [0x02cf604c],EBP      ; 005640ba | DAT_02cf604c
    MOV dword ptr [0x02cf6050],EBP      ; 005640c0 | DAT_02cf6050
    MOV dword ptr [0x02cf6054],EBP      ; 005640c6 | DAT_02cf6054
    MOV dword ptr [0x02cf6058],EBP      ; 005640cc | DAT_02cf6058
    MOV dword ptr [0x02cf605c],EBP      ; 005640d2 | DAT_02cf605c
    MOV dword ptr [0x02cf6060],EBP      ; 005640d8 | DAT_02cf6060
    MOV dword ptr [0x02cf6064],EBP      ; 005640de | DAT_02cf6064
    MOV dword ptr [0x02cf6068],EBP      ; 005640e4 | DAT_02cf6068
    MOV dword ptr [0x02cf606c],EBP      ; 005640ea | DAT_02cf606c
    MOV dword ptr [0x02cf6070],EBP      ; 005640f0 | DAT_02cf6070
    MOV dword ptr [0x02cf6074],EBP      ; 005640f6 | DAT_02cf6074
    MOV dword ptr [0x02cf6078],EBP      ; 005640fc | DAT_02cf6078
    MOV dword ptr [0x02cf607c],EBP      ; 00564102 | DAT_02cf607c
    MOV dword ptr [0x02cf6080],EBP      ; 00564108 | DAT_02cf6080
    MOV dword ptr [0x02cf6084],EBP      ; 0056410e | DAT_02cf6084
    MOV dword ptr [0x02cf6088],EBP      ; 00564114 | DAT_02cf6088
    MOV dword ptr [0x02cf608c],EBP      ; 0056411a | DAT_02cf608c
    MOV dword ptr [0x02cf6090],EBP      ; 00564120 | DAT_02cf6090
    MOV dword ptr [0x02cf6094],EBP      ; 00564126 | DAT_02cf6094
    MOV dword ptr [0x02cf6098],EBP      ; 0056412c | DAT_02cf6098
    MOV dword ptr [0x02cf609c],EBP      ; 00564132 | DAT_02cf609c
    MOV dword ptr [0x02cf60a0],EBP      ; 00564138 | DAT_02cf60a0
    MOV dword ptr [0x02cf60a4],EBP      ; 0056413e | DAT_02cf60a4
    MOV dword ptr [0x02cf60a8],EBP      ; 00564144 | DAT_02cf60a8
    MOV dword ptr [0x02cf60ac],EBP      ; 0056414a | DAT_02cf60ac
    MOV dword ptr [0x02cf60b0],EBP      ; 00564150 | DAT_02cf60b0
    MOV dword ptr [0x02cf60b4],EBP      ; 00564156 | DAT_02cf60b4
    MOV dword ptr [0x02cf60b8],EBP      ; 0056415c | DAT_02cf60b8
    MOV dword ptr [0x02cf60bc],EBP      ; 00564162 | DAT_02cf60bc
    MOV dword ptr [0x02cf60c0],EBP      ; 00564168 | DAT_02cf60c0
    MOV dword ptr [0x02cf60c4],EBP      ; 0056416e | DAT_02cf60c4
    MOV dword ptr [0x02cf60c8],EBP      ; 00564174 | DAT_02cf60c8
    MOV dword ptr [0x02cf60cc],EBP      ; 0056417a | DAT_02cf60cc
    MOV dword ptr [0x02cf60d0],EBP      ; 00564180 | DAT_02cf60d0
    MOV dword ptr [0x02cf60d4],EBP      ; 00564186 | DAT_02cf60d4
    MOV dword ptr [0x02cf60d8],EBP      ; 0056418c | DAT_02cf60d8
    MOV dword ptr [0x02cf60dc],EBP      ; 00564192 | DAT_02cf60dc
    MOV dword ptr [0x02cf60e0],EBP      ; 00564198 | DAT_02cf60e0
    MOV dword ptr [0x02cf60e4],EBP      ; 0056419e | DAT_02cf60e4
    MOV dword ptr [0x02cf60e8],EBP      ; 005641a4 | DAT_02cf60e8
    MOV dword ptr [0x02cf60ec],EBP      ; 005641aa | DAT_02cf60ec
    MOV dword ptr [0x02cf60f0],EBP      ; 005641b0 | DAT_02cf60f0
    MOV dword ptr [0x02cf60f4],EBP      ; 005641b6 | DAT_02cf60f4
    MOV dword ptr [0x02cf60f8],EBP      ; 005641bc | DAT_02cf60f8
    MOV dword ptr [0x02cf60fc],EBP      ; 005641c2 | DAT_02cf60fc
    MOV dword ptr [0x02cf6100],EBP      ; 005641c8 | DAT_02cf6100
    MOV dword ptr [0x02cf6104],EBP      ; 005641ce | DAT_02cf6104
    MOV dword ptr [0x02cf5fe4],EBP      ; 005641d4 | DAT_02cf5fe4
    POP EBP                             ; 005641da
    POP EBX                             ; 005641db
    RET                                 ; 005641dc
    PUSH EDI                            ; 005641dd
        ;   Label: LAB_005641dd
    PUSH EBX                            ; 005641de
    CALL wincore_wddvmem.cpp_freeLibrary_FUN_0057ad00 ; 005641df
        ;   XREF to: 0057ad00 (UNCONDITIONAL_CALL)  ; BOOL wincore_wddvmem.cpp_freeLibrary_FUN_0057ad00(HMODULE hLibModule)
    XOR EDI,EDI                         ; 005641e4
    ADD ESP,0x4                         ; 005641e6
    MOV dword ptr [0x02cf610c],EDI      ; 005641e9 | DAT_02cf610c
    POP EDI                             ; 005641ef
    JMP 0x0056402e                      ; 005641f0
        ;   XREF to: 0056402e (UNCONDITIONAL_JUMP)  ; LAB_0056402e

