; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winvideo_cpp_openMovie_FUN_00590e90(HWND parent_window,char *movie_filename)
;
; Parameters:
; HWND             Stack[0x4]:4   parent_window
; char *           Stack[0x8]:4   movie_filename
;
; Referenced Globals:
;   undefined4 DAT_02665a48
;   undefined4 DAT_02665a50
;   undefined4 DAT_02665a58
;
; Called Functions:
;   crt_stdlib.c_atoi_FUN_005bad20
;   crt_unknown.c_FUN_005b7790
;   wincore_winvideo.cpp_closeMovie_FUN_00590e40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00590e90
        ;   Label: wincore_winvideo.cpp_openMovie_FUN_00590e90
    PUSH ESI                            ; 00590e91
    PUSH EDI                            ; 00590e92
    PUSH EBP                            ; 00590e93
    SUB ESP,0x1a4                       ; 00590e94
    MOV EBX,dword ptr [ESP + 0x1b8]     ; 00590e9a
    CMP dword ptr [0x02665a50],0x0      ; 00590ea1 | DAT_02665a50
    JZ 0x00590eb3                       ; 00590ea8
        ;   XREF to: 00590eb3 (CONDITIONAL_JUMP)  ; LAB_00590eb3
    PUSH EBX                            ; 00590eaa
    CALL wincore_winvideo.cpp_closeMovie_FUN_00590e40 ; 00590eab
        ;   XREF to: 00590e40 (UNCONDITIONAL_CALL)  ; void wincore_winvideo.cpp_closeMovie_FUN_00590e40(HWND window_handle)
    ADD ESP,0x4                         ; 00590eb0
    PUSH EBX                            ; 00590eb3
        ;   Label: LAB_00590eb3
    MOV ECX,dword ptr [ESP + 0x1c0]     ; 00590eb4
    PUSH ECX                            ; 00590ebb
    PUSH 0x5eec19                       ; 00590ebc
    LEA EAX,[ESP + 0xc]                 ; 00590ec1
    PUSH EAX                            ; 00590ec5
    CALL crt_unknown.c_FUN_005b7790     ; 00590ec6
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0x10                        ; 00590ecb
    PUSH 0x0                            ; 00590ece
    PUSH 0x0                            ; 00590ed0
    PUSH 0x0                            ; 00590ed2
    LEA EAX,[ESP + 0xc]                 ; 00590ed4
    PUSH EAX                            ; 00590ed8
    CALL dword ptr CS:[0x5c8440]        ; 00590ed9
    TEST EAX,EAX                        ; 00590ee0
    JNZ 0x005910f0                      ; 00590ee2
        ;   XREF to: 005910f0 (CONDITIONAL_JUMP)  ; LAB_005910f0
    PUSH EAX                            ; 00590ee8
    PUSH 0x104                          ; 00590ee9
    LEA EAX,[ESP + 0x8]                 ; 00590eee
    PUSH EAX                            ; 00590ef2
    MOV ESI,0x1                         ; 00590ef3
    PUSH 0x5eec43                       ; 00590ef8
    MOV dword ptr [0x02665a50],ESI      ; 00590efd | DAT_02665a50
    CALL dword ptr CS:[0x5c8440]        ; 00590f03
    TEST EAX,EAX                        ; 00590f0a
    JNZ 0x00590f3c                      ; 00590f0c
        ;   XREF to: 00590f3c (CONDITIONAL_JUMP)  ; LAB_00590f3c
    MOV EAX,ESP                         ; 00590f0e
    PUSH EAX                            ; 00590f10
    CALL crt_stdlib.c_atoi_FUN_005bad20 ; 00590f11
        ;   XREF to: 005bad20 (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_atoi_FUN_005bad20(char * string_ptr)
    ADD ESP,0x4                         ; 00590f16
    MOV [0x02665a48],EAX                ; 00590f19 | DAT_02665a48
    MOV EDI,dword ptr [0x02665a58]      ; 00590f1e | DAT_02665a58
        ;   Label: LAB_00590f1e
    TEST EDI,EDI                        ; 00590f24
    JNZ 0x00590f31                      ; 00590f26
        ;   XREF to: 00590f31 (CONDITIONAL_JUMP)  ; LAB_00590f31
    CMP dword ptr [0x02665a50],0x0      ; 00590f28 | DAT_02665a50
    JNZ 0x00590f61                      ; 00590f2f
        ;   XREF to: 00590f61 (CONDITIONAL_JUMP)  ; LAB_00590f61
    ADD ESP,0x1a4                       ; 00590f31
        ;   Label: LAB_00590f31
    POP EBP                             ; 00590f37
    POP EDI                             ; 00590f38
    POP ESI                             ; 00590f39
    POP EBX                             ; 00590f3a
    RET                                 ; 00590f3b
    PUSH 0x104                          ; 00590f3c
        ;   Label: LAB_00590f3c
    LEA EDX,[ESP + 0x4]                 ; 00590f41
    PUSH EDX                            ; 00590f45
    PUSH EAX                            ; 00590f46
    CALL dword ptr CS:[0x5c8438]        ; 00590f47
    PUSH 0x30                           ; 00590f4e
    PUSH 0x0                            ; 00590f50
    LEA EAX,[ESP + 0x8]                 ; 00590f52
    PUSH EAX                            ; 00590f56
    PUSH EBX                            ; 00590f57
    CALL dword ptr CS:[0x5c84cc]        ; 00590f58
    JMP 0x00590f1e                      ; 00590f5f
        ;   XREF to: 00590f1e (UNCONDITIONAL_JUMP)  ; LAB_00590f1e
    LEA EAX,[ESP + 0x194]               ; 00590f61
        ;   Label: LAB_00590f61
    PUSH EAX                            ; 00590f68
    PUSH EBX                            ; 00590f69
    CALL dword ptr CS:[0x5c84ac]        ; 00590f6a
    PUSH EDI                            ; 00590f71
    PUSH 0x80                           ; 00590f72
    LEA EAX,[ESP + 0x10c]               ; 00590f77
    PUSH EAX                            ; 00590f7e
    PUSH 0x5eebfe                       ; 00590f7f
    CALL dword ptr CS:[0x5c8440]        ; 00590f84
    LEA EAX,[ESP + 0x184]               ; 00590f8b
    PUSH EAX                            ; 00590f92
    CALL dword ptr CS:[0x5c84f8]        ; 00590f93
    MOV DL,byte ptr [ESP + 0x104]       ; 00590f9a
    LEA EAX,[ESP + 0x104]               ; 00590fa1
    CMP DL,0x20                         ; 00590fa8
    JNZ 0x00590fc0                      ; 00590fab
        ;   XREF to: 00590fc0 (CONDITIONAL_JUMP)  ; LAB_00590fc0
    MOV DH,byte ptr [EAX + 0x1]         ; 00590fad
        ;   Label: LAB_00590fad
    INC EAX                             ; 00590fb0
    CMP DH,0x20                         ; 00590fb1
    JZ 0x00590fad                       ; 00590fb4
        ;   XREF to: 00590fad (CONDITIONAL_JUMP)  ; LAB_00590fad
    LEA EAX,[EAX]                       ; 00590fb6
    LEA EDX,[EDX]                       ; 00590fbc
    CMP byte ptr [EAX],0x20             ; 00590fc0
        ;   Label: LAB_00590fc0
    JZ 0x00590fc8                       ; 00590fc3
        ;   XREF to: 00590fc8 (CONDITIONAL_JUMP)  ; LAB_00590fc8
    INC EAX                             ; 00590fc5
    JMP 0x00590fc0                      ; 00590fc6
        ;   XREF to: 00590fc0 (UNCONDITIONAL_JUMP)  ; LAB_00590fc0
    CMP byte ptr [EAX],0x20             ; 00590fc8
        ;   Label: LAB_00590fc8
    JNZ 0x00590fd0                      ; 00590fcb
        ;   XREF to: 00590fd0 (CONDITIONAL_JUMP)  ; LAB_00590fd0
    INC EAX                             ; 00590fcd
    JMP 0x00590fc8                      ; 00590fce
        ;   XREF to: 00590fc8 (UNCONDITIONAL_JUMP)  ; LAB_00590fc8
    CMP byte ptr [EAX],0x20             ; 00590fd0
        ;   Label: LAB_00590fd0
    JZ 0x00590fd8                       ; 00590fd3
        ;   XREF to: 00590fd8 (CONDITIONAL_JUMP)  ; LAB_00590fd8
    INC EAX                             ; 00590fd5
    JMP 0x00590fd0                      ; 00590fd6
        ;   XREF to: 00590fd0 (UNCONDITIONAL_JUMP)  ; LAB_00590fd0
    CMP byte ptr [EAX],0x20             ; 00590fd8
        ;   Label: LAB_00590fd8
    JNZ 0x00590ff9                      ; 00590fdb
        ;   XREF to: 00590ff9 (CONDITIONAL_JUMP)  ; LAB_00590ff9
    INC EAX                             ; 00590fdd
    JMP 0x00590fd8                      ; 00590fde
        ;   XREF to: 00590fd8 (UNCONDITIONAL_JUMP)  ; LAB_00590fd8
    IMUL EDX,dword ptr [ESP + 0x18c],0xa ; 00590fe0
        ;   Label: LAB_00590fe0
    XOR ECX,ECX                         ; 00590fe8
    MOV CL,byte ptr [EAX]               ; 00590fea
    SUB ECX,0x30                        ; 00590fec
    ADD EDX,ECX                         ; 00590fef
    INC EAX                             ; 00590ff1
    MOV dword ptr [ESP + 0x18c],EDX     ; 00590ff2
    MOV DL,byte ptr [EAX]               ; 00590ff9
        ;   Label: LAB_00590ff9
    CMP DL,0x30                         ; 00590ffb
    JNC 0x00591008                      ; 00590ffe
        ;   XREF to: 00591008 (CONDITIONAL_JUMP)  ; LAB_00591008
    CMP byte ptr [EAX],0x20             ; 00591000
        ;   Label: LAB_00591000
    JNZ 0x00591028                      ; 00591003
        ;   XREF to: 00591028 (CONDITIONAL_JUMP)  ; LAB_00591028
    INC EAX                             ; 00591005
    JMP 0x00591000                      ; 00591006
        ;   XREF to: 00591000 (UNCONDITIONAL_JUMP)  ; LAB_00591000
    CMP DL,0x39                         ; 00591008
        ;   Label: LAB_00591008
    JBE 0x00590fe0                      ; 0059100b
        ;   XREF to: 00590fe0 (CONDITIONAL_JUMP)  ; LAB_00590fe0
    JMP 0x00591000                      ; 0059100d
        ;   XREF to: 00591000 (UNCONDITIONAL_JUMP)  ; LAB_00591000
    IMUL ECX,dword ptr [ESP + 0x190],0xa ; 0059100f
        ;   Label: LAB_0059100f
    XOR EDX,EDX                         ; 00591017
    MOV DL,byte ptr [EAX]               ; 00591019
    SUB EDX,0x30                        ; 0059101b
    ADD ECX,EDX                         ; 0059101e
    INC EAX                             ; 00591020
    MOV dword ptr [ESP + 0x190],ECX     ; 00591021
    MOV BH,byte ptr [EAX]               ; 00591028
        ;   Label: LAB_00591028
    CMP BH,0x30                         ; 0059102a
    JC 0x00591034                       ; 0059102d
        ;   XREF to: 00591034 (CONDITIONAL_JUMP)  ; LAB_00591034
    CMP BH,0x39                         ; 0059102f
    JBE 0x0059100f                      ; 00591032
        ;   XREF to: 0059100f (CONDITIONAL_JUMP)  ; LAB_0059100f
    CMP dword ptr [ESP + 0x19c],0x190   ; 00591034
        ;   Label: LAB_00591034
    JLE 0x005910da                      ; 0059103f
        ;   XREF to: 005910da (CONDITIONAL_JUMP)  ; LAB_005910da
    MOV EBP,dword ptr [ESP + 0x18c]     ; 00591045
        ;   Label: LAB_00591045
    MOV EDI,dword ptr [ESP + 0x190]     ; 0059104c
    ADD EBP,EBP                         ; 00591053
    ADD EDI,EDI                         ; 00591055
    MOV dword ptr [ESP + 0x18c],EBP     ; 00591057
    MOV dword ptr [ESP + 0x190],EDI     ; 0059105e
    MOV EAX,dword ptr [ESP + 0x19c]     ; 00591065
        ;   Label: LAB_00591065
    MOV EDX,EAX                         ; 0059106c
    SAR EDX,0x1f                        ; 0059106e
    SUB EAX,EDX                         ; 00591071
    SAR EAX,0x1                         ; 00591073
    MOV EBX,EAX                         ; 00591075
    MOV EAX,dword ptr [ESP + 0x18c]     ; 00591077
    MOV EDX,EAX                         ; 0059107e
    SAR EDX,0x1f                        ; 00591080
    SUB EAX,EDX                         ; 00591083
    SAR EAX,0x1                         ; 00591085
    SUB EBX,EAX                         ; 00591087
    MOV EAX,dword ptr [ESP + 0x1a0]     ; 00591089
    MOV EDX,EAX                         ; 00591090
    SAR EDX,0x1f                        ; 00591092
    SUB EAX,EDX                         ; 00591095
    SAR EAX,0x1                         ; 00591097
    MOV ECX,EAX                         ; 00591099
    MOV EAX,dword ptr [ESP + 0x190]     ; 0059109b
    MOV EDX,EAX                         ; 005910a2
    SAR EDX,0x1f                        ; 005910a4
    SUB EAX,EDX                         ; 005910a7
    SAR EAX,0x1                         ; 005910a9
    PUSH 0x1                            ; 005910ab
    SUB ECX,EAX                         ; 005910ad
    MOV EAX,dword ptr [ESP + 0x194]     ; 005910af
    PUSH EAX                            ; 005910b6
    MOV EDX,dword ptr [ESP + 0x194]     ; 005910b7
    PUSH EDX                            ; 005910be
    PUSH ECX                            ; 005910bf
    PUSH EBX                            ; 005910c0
    MOV ECX,dword ptr [0x02665a48]      ; 005910c1 | DAT_02665a48
    PUSH ECX                            ; 005910c7
    CALL dword ptr CS:[0x5c84d0]        ; 005910c8
    ADD ESP,0x1a4                       ; 005910cf
    POP EBP                             ; 005910d5
    POP EDI                             ; 005910d6
    POP ESI                             ; 005910d7
    POP EBX                             ; 005910d8
    RET                                 ; 005910d9
    CMP dword ptr [ESP + 0x1a0],0x12c   ; 005910da
        ;   Label: LAB_005910da
    JG 0x00591045                       ; 005910e5
        ;   XREF to: 00591045 (CONDITIONAL_JUMP)  ; LAB_00591045
    JMP 0x00591065                      ; 005910eb
        ;   XREF to: 00591065 (UNCONDITIONAL_JUMP)  ; LAB_00591065
    PUSH 0x30                           ; 005910f0
        ;   Label: LAB_005910f0
    PUSH 0x0                            ; 005910f2
    PUSH 0x5eec5c                       ; 005910f4
    PUSH EBX                            ; 005910f9
    XOR EBX,EBX                         ; 005910fa
    CALL dword ptr CS:[0x5c84cc]        ; 005910fc
    MOV dword ptr [0x02665a50],EBX      ; 00591103 | DAT_02665a50
    ADD ESP,0x1a4                       ; 00591109
    POP EBP                             ; 0059110f
    POP EDI                             ; 00591110
    POP ESI                             ; 00591111
    POP EBX                             ; 00591112
    RET                                 ; 00591113

