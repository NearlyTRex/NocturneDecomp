; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00491ca0(int *param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0x120]:1  local_120
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004bbf70 at 004bc62b
;
; Referenced Globals:
;   undefined4 DAT_005d4f93
;   TerminatedCString s_core_event_cpp_005d4f97
;   TerminatedCString s_CEventList_loadState_fil_005d4fa9
;   undefined4 DAT_005d500c
;   TerminatedCString s_anon_005d5010
;   undefined4 DAT_005d5017
;   TerminatedCString s_anon_005d501b
;   undefined4 DAT_005d5022
;   TerminatedCString s_anon_005d5026
;   undefined4 DAT_005d502d
;   TerminatedCString s_f_005d5031
;   undefined4 DAT_005d503c
;   TerminatedCString s_d_005d5040
;   undefined4 DAT_005d504b
;   TerminatedCString s_anon_005d504f
;   ... and 4 more
;
; Called Functions:
;   FUN_00489380
;   FUN_004e4500
;   FUN_005b8100
;   FUN_005b9600
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00491ca0
        ;   Label: FUN_00491ca0
    PUSH ESI                            ; 00491ca1
    PUSH EDI                            ; 00491ca2
    PUSH EBP                            ; 00491ca3
    SUB ESP,0x110                       ; 00491ca4
    MOV EBX,dword ptr [ESP + 0x124]     ; 00491caa
    MOV ESI,dword ptr [ESP + 0x128]     ; 00491cb1
    PUSH EBX                            ; 00491cb8
    CALL FUN_00489380                   ; 00491cb9
        ;   XREF to: 00489380 (UNCONDITIONAL_CALL)  ; undefined FUN_00489380()
    ADD ESP,0x4                         ; 00491cbe
    PUSH ESI                            ; 00491cc1
    PUSH 0xff                           ; 00491cc2
    LEA EAX,[ESP + 0x8]                 ; 00491cc7
    PUSH EAX                            ; 00491ccb
    CALL FUN_005b9600                   ; 00491ccc
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9600()
    ADD ESP,0xc                         ; 00491cd1
    LEA EAX,[ESP + 0x100]               ; 00491cd4
    PUSH EAX                            ; 00491cdb
    PUSH 0x5d4f93                       ; 00491cdc | DAT_005d4f93
    PUSH ESI                            ; 00491ce1
    CALL FUN_005b8100                   ; 00491ce2
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0xc                         ; 00491ce7
    MOV EDX,dword ptr [ESP + 0x100]     ; 00491cea
    CMP EDX,0x5                         ; 00491cf1
    JG 0x00491fcb                       ; 00491cf4
        ;   XREF to: 00491fcb (CONDITIONAL_JUMP)  ; LAB_00491fcb
    PUSH ESI                            ; 00491cfa
        ;   Label: LAB_00491cfa
    PUSH 0xff                           ; 00491cfb
    LEA EAX,[ESP + 0x8]                 ; 00491d00
    PUSH EAX                            ; 00491d04
    CALL FUN_005b9600                   ; 00491d05
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9600()
    ADD ESP,0xc                         ; 00491d0a
    PUSH EBX                            ; 00491d0d
    PUSH 0x5d500c                       ; 00491d0e | DAT_005d500c
    PUSH ESI                            ; 00491d13
    XOR EBP,EBP                         ; 00491d14
    CALL FUN_005b8100                   ; 00491d16
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    MOV EAX,dword ptr [EBX]             ; 00491d1b
    ADD ESP,0xc                         ; 00491d1d
    TEST EAX,EAX                        ; 00491d20
    JLE 0x00491d40                      ; 00491d22
        ;   XREF to: 00491d40 (CONDITIONAL_JUMP)  ; LAB_00491d40
    LEA EDI,[EBX + 0x4]                 ; 00491d24
    PUSH EDI                            ; 00491d27
        ;   Label: LAB_00491d27
    PUSH 0x5d5010                       ; 00491d28 | = "%[^\n]\n"
    PUSH ESI                            ; 00491d2d
    INC EBP                             ; 00491d2e
    ADD EDI,0x20                        ; 00491d2f
    CALL FUN_005b8100                   ; 00491d32
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    MOV EDX,dword ptr [EBX]             ; 00491d37
    ADD ESP,0xc                         ; 00491d39
    CMP EBP,EDX                         ; 00491d3c
    JL 0x00491d27                       ; 00491d3e
        ;   XREF to: 00491d27 (CONDITIONAL_JUMP)  ; LAB_00491d27
    PUSH ESI                            ; 00491d40
        ;   Label: LAB_00491d40
    PUSH 0xff                           ; 00491d41
    LEA EDI,[ESP + 0x8]                 ; 00491d46
    PUSH EDI                            ; 00491d4a
    CALL FUN_005b9600                   ; 00491d4b
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9600()
    ADD ESP,0xc                         ; 00491d50
    LEA EDI,[EBX + 0xc84]               ; 00491d53
    PUSH EDI                            ; 00491d59
    PUSH 0x5d5017                       ; 00491d5a | DAT_005d5017
    PUSH ESI                            ; 00491d5f
    XOR EBP,EBP                         ; 00491d60
    CALL FUN_005b8100                   ; 00491d62
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    MOV ECX,dword ptr [EBX + 0xc84]     ; 00491d67
    ADD ESP,0xc                         ; 00491d6d
    TEST ECX,ECX                        ; 00491d70
    JLE 0x00491da0                      ; 00491d72
        ;   XREF to: 00491da0 (CONDITIONAL_JUMP)  ; LAB_00491da0
    LEA EDI,[EBX + 0xc88]               ; 00491d74
    PUSH EDI                            ; 00491d7a
        ;   Label: LAB_00491d7a
    PUSH 0x5d501b                       ; 00491d7b | = "%[^\n]\n"
    PUSH ESI                            ; 00491d80
    INC EBP                             ; 00491d81
    ADD EDI,0x20                        ; 00491d82
    CALL FUN_005b8100                   ; 00491d85
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    MOV EAX,dword ptr [EBX + 0xc84]     ; 00491d8a
    ADD ESP,0xc                         ; 00491d90
    CMP EBP,EAX                         ; 00491d93
    JL 0x00491d7a                       ; 00491d95
        ;   XREF to: 00491d7a (CONDITIONAL_JUMP)  ; LAB_00491d7a
    LEA EAX,[EAX]                       ; 00491d97
    LEA EDX,[EDX]                       ; 00491d9d
    PUSH ESI                            ; 00491da0
        ;   Label: LAB_00491da0
    PUSH 0xff                           ; 00491da1
    LEA EDI,[ESP + 0x8]                 ; 00491da6
    PUSH EDI                            ; 00491daa
    CALL FUN_005b9600                   ; 00491dab
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9600()
    ADD ESP,0xc                         ; 00491db0
    LEA EDI,[EBX + 0x258c]              ; 00491db3
    PUSH EDI                            ; 00491db9
    PUSH 0x5d5022                       ; 00491dba | DAT_005d5022
    PUSH ESI                            ; 00491dbf
    XOR EBP,EBP                         ; 00491dc0
    CALL FUN_005b8100                   ; 00491dc2
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    MOV EDX,dword ptr [EBX + 0x258c]    ; 00491dc7
    ADD ESP,0xc                         ; 00491dcd
    TEST EDX,EDX                        ; 00491dd0
    JLE 0x00491e00                      ; 00491dd2
        ;   XREF to: 00491e00 (CONDITIONAL_JUMP)  ; LAB_00491e00
    LEA EDI,[EBX + 0x2590]              ; 00491dd4
    PUSH EDI                            ; 00491dda
        ;   Label: LAB_00491dda
    PUSH 0x5d5026                       ; 00491ddb | = "%[^\n]\n"
    PUSH ESI                            ; 00491de0
    INC EBP                             ; 00491de1
    ADD EDI,0x20                        ; 00491de2
    CALL FUN_005b8100                   ; 00491de5
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    MOV ECX,dword ptr [EBX + 0x258c]    ; 00491dea
    ADD ESP,0xc                         ; 00491df0
    CMP EBP,ECX                         ; 00491df3
    JL 0x00491dda                       ; 00491df5
        ;   XREF to: 00491dda (CONDITIONAL_JUMP)  ; LAB_00491dda
    LEA EAX,[EAX]                       ; 00491df7
    LEA EDX,[EDX]                       ; 00491dfd
    CMP dword ptr [ESP + 0x100],0x2     ; 00491e00
        ;   Label: LAB_00491e00
    JL 0x00491e90                       ; 00491e08
        ;   XREF to: 00491e90 (CONDITIONAL_JUMP)  ; LAB_00491e90
    PUSH ESI                            ; 00491e0e
    PUSH 0xff                           ; 00491e0f
    LEA EDI,[ESP + 0x8]                 ; 00491e14
    PUSH EDI                            ; 00491e18
    CALL FUN_005b9600                   ; 00491e19
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9600()
    ADD ESP,0xc                         ; 00491e1e
    LEA EDI,[EBX + 0x3210]              ; 00491e21
    PUSH EDI                            ; 00491e27
    PUSH 0x5d502d                       ; 00491e28 | DAT_005d502d
    PUSH ESI                            ; 00491e2d
    XOR EBP,EBP                         ; 00491e2e
    CALL FUN_005b8100                   ; 00491e30
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0xc                         ; 00491e35
    MOV EAX,dword ptr [EBX + 0x3210]    ; 00491e38
    MOV dword ptr [ESP + 0x10c],EBP     ; 00491e3e
    TEST EAX,EAX                        ; 00491e45
    JLE 0x00491e90                      ; 00491e47
        ;   XREF to: 00491e90 (CONDITIONAL_JUMP)  ; LAB_00491e90
    LEA EDI,[EBX + 0x3214]              ; 00491e49
    LEA EBP,[EBX + 0x3354]              ; 00491e4f
    PUSH EDI                            ; 00491e55
        ;   Label: LAB_00491e55
    PUSH EBP                            ; 00491e56
    PUSH 0x5d5031                       ; 00491e57 | = "%f, %[^\n]\n"
    PUSH ESI                            ; 00491e5c
    CALL FUN_005b8100                   ; 00491e5d
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0x10                        ; 00491e62
    ADD EDI,0x20                        ; 00491e65
    MOV EDX,dword ptr [ESP + 0x10c]     ; 00491e68
    ADD EBP,0x4                         ; 00491e6f
    INC EDX                             ; 00491e72
    MOV ECX,dword ptr [EBX + 0x3210]    ; 00491e73
    MOV dword ptr [ESP + 0x10c],EDX     ; 00491e79
    CMP EDX,ECX                         ; 00491e80
    JL 0x00491e55                       ; 00491e82
        ;   XREF to: 00491e55 (CONDITIONAL_JUMP)  ; LAB_00491e55
    LEA EAX,[EAX]                       ; 00491e84
    LEA EDX,[EDX]                       ; 00491e8a
    CMP dword ptr [ESP + 0x100],0x3     ; 00491e90
        ;   Label: LAB_00491e90
    JL 0x00491f20                       ; 00491e98
        ;   XREF to: 00491f20 (CONDITIONAL_JUMP)  ; LAB_00491f20
    PUSH ESI                            ; 00491e9e
    PUSH 0xff                           ; 00491e9f
    LEA EDI,[ESP + 0x8]                 ; 00491ea4
    PUSH EDI                            ; 00491ea8
    CALL FUN_005b9600                   ; 00491ea9
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9600()
    ADD ESP,0xc                         ; 00491eae
    LEA EDI,[EBX + 0x337c]              ; 00491eb1
    PUSH EDI                            ; 00491eb7
    PUSH 0x5d503c                       ; 00491eb8 | DAT_005d503c
    PUSH ESI                            ; 00491ebd
    XOR EBP,EBP                         ; 00491ebe
    CALL FUN_005b8100                   ; 00491ec0
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    MOV EAX,dword ptr [EBX + 0x337c]    ; 00491ec5
    ADD ESP,0xc                         ; 00491ecb
    TEST EAX,EAX                        ; 00491ece
    JLE 0x00491f20                      ; 00491ed0
        ;   XREF to: 00491f20 (CONDITIONAL_JUMP)  ; LAB_00491f20
    LEA EAX,[EBX + 0x3380]              ; 00491ed2
    LEA EDI,[EBX + 0x34c0]              ; 00491ed8
    MOV dword ptr [ESP + 0x108],EAX     ; 00491ede
    MOV EDX,dword ptr [ESP + 0x108]     ; 00491ee5
        ;   Label: LAB_00491ee5
    PUSH EDX                            ; 00491eec
    PUSH EDI                            ; 00491eed
    PUSH 0x5d5040                       ; 00491eee | = "%d, %[^\n]\n"
    PUSH ESI                            ; 00491ef3
    CALL FUN_005b8100                   ; 00491ef4
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0x10                        ; 00491ef9
    INC EBP                             ; 00491efc
    MOV ECX,dword ptr [ESP + 0x108]     ; 00491efd
    ADD EDI,0x4                         ; 00491f04
    ADD ECX,0x20                        ; 00491f07
    MOV EAX,dword ptr [EBX + 0x337c]    ; 00491f0a
    MOV dword ptr [ESP + 0x108],ECX     ; 00491f10
    CMP EBP,EAX                         ; 00491f17
    JL 0x00491ee5                       ; 00491f19
        ;   XREF to: 00491ee5 (CONDITIONAL_JUMP)  ; LAB_00491ee5
    LEA EAX,[EAX]                       ; 00491f1b
    MOV ECX,ECX                         ; 00491f1e
    CMP dword ptr [ESP + 0x100],0x4     ; 00491f20
        ;   Label: LAB_00491f20
    JL 0x00491fb0                       ; 00491f28
        ;   XREF to: 00491fb0 (CONDITIONAL_JUMP)  ; LAB_00491fb0
    PUSH ESI                            ; 00491f2e
    PUSH 0xff                           ; 00491f2f
    LEA EDI,[ESP + 0x8]                 ; 00491f34
    PUSH EDI                            ; 00491f38
    CALL FUN_005b9600                   ; 00491f39
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9600()
    ADD ESP,0xc                         ; 00491f3e
    LEA EDI,[EBX + 0x34e8]              ; 00491f41
    PUSH EDI                            ; 00491f47
    PUSH 0x5d504b                       ; 00491f48 | DAT_005d504b
    PUSH ESI                            ; 00491f4d
    XOR EBP,EBP                         ; 00491f4e
    CALL FUN_005b8100                   ; 00491f50
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    MOV ECX,dword ptr [EBX + 0x34e8]    ; 00491f55
    ADD ESP,0xc                         ; 00491f5b
    TEST ECX,ECX                        ; 00491f5e
    JLE 0x00491fb0                      ; 00491f60
        ;   XREF to: 00491fb0 (CONDITIONAL_JUMP)  ; LAB_00491fb0
    LEA EAX,[EBX + 0x37da]              ; 00491f62
    LEA EDI,[EBX + 0x34ec]              ; 00491f68
    MOV dword ptr [ESP + 0x104],EAX     ; 00491f6e
    MOV EAX,dword ptr [ESP + 0x104]     ; 00491f75
        ;   Label: LAB_00491f75
    PUSH EAX                            ; 00491f7c
    PUSH EDI                            ; 00491f7d
    PUSH 0x5d504f                       ; 00491f7e | = "\"%[^\"]\" , \"%[^\"]\"\n"
    PUSH ESI                            ; 00491f83
    CALL FUN_005b8100                   ; 00491f84
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0x10                        ; 00491f89
    INC EBP                             ; 00491f8c
    MOV EDX,dword ptr [ESP + 0x104]     ; 00491f8d
    ADD EDI,0x1e                        ; 00491f94
    ADD EDX,0x1e                        ; 00491f97
    MOV ECX,dword ptr [EBX + 0x34e8]    ; 00491f9a
    MOV dword ptr [ESP + 0x104],EDX     ; 00491fa0
    CMP EBP,ECX                         ; 00491fa7
    JL 0x00491f75                       ; 00491fa9
        ;   XREF to: 00491f75 (CONDITIONAL_JUMP)  ; LAB_00491f75
    LEA EAX,[EAX]                       ; 00491fab
    MOV ECX,ECX                         ; 00491fae
    CMP dword ptr [ESP + 0x100],0x5     ; 00491fb0
        ;   Label: LAB_00491fb0
    JGE 0x00491ff6                      ; 00491fb8
        ;   XREF to: 00491ff6 (CONDITIONAL_JUMP)  ; LAB_00491ff6
    LEA EAX,[EAX]                       ; 00491fba
    ADD ESP,0x110                       ; 00491fc0
        ;   Label: LAB_00491fc0
    POP EBP                             ; 00491fc6
    POP EDI                             ; 00491fc7
    POP ESI                             ; 00491fc8
    POP EBX                             ; 00491fc9
    RET                                 ; 00491fca
    PUSH 0x5                            ; 00491fcb
        ;   Label: LAB_00491fcb
    PUSH EDX                            ; 00491fcd
    MOV ECX,0x5d4f97                    ; 00491fce | = "..\\core\\event.cpp"
    MOV EDI,0xf3e                       ; 00491fd3
    PUSH 0x5d4fa9                       ; 00491fd8 | = "CEventList::loadState - file version ..."
    MOV dword ptr [0x01d046a0],ECX      ; 00491fdd | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 00491fe3 | DAT_01d046a4
    CALL FUN_004e4500                   ; 00491fe9
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0xc                         ; 00491fee
    JMP 0x00491cfa                      ; 00491ff1
        ;   XREF to: 00491cfa (UNCONDITIONAL_JUMP)  ; LAB_00491cfa
    PUSH ESI                            ; 00491ff6
        ;   Label: LAB_00491ff6
    PUSH 0xff                           ; 00491ff7
    LEA EDI,[ESP + 0x8]                 ; 00491ffc
    PUSH EDI                            ; 00492000
    CALL FUN_005b9600                   ; 00492001
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9600()
    ADD ESP,0xc                         ; 00492006
    LEA EDI,[EBX + 0x1908]              ; 00492009
    PUSH EDI                            ; 0049200f
    PUSH 0x5d5062                       ; 00492010 | DAT_005d5062
    PUSH ESI                            ; 00492015
    XOR EDI,EDI                         ; 00492016
    CALL FUN_005b8100                   ; 00492018
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    MOV EBP,dword ptr [EBX + 0x1908]    ; 0049201d
    ADD ESP,0xc                         ; 00492023
    TEST EBP,EBP                        ; 00492026
    JLE 0x00491fc0                      ; 00492028
        ;   XREF to: 00491fc0 (CONDITIONAL_JUMP)  ; LAB_00491fc0
    LEA EBP,[EBX + 0x190c]              ; 0049202a
    PUSH EBP                            ; 00492030
        ;   Label: LAB_00492030
    PUSH 0x5d5066                       ; 00492031 | = "%[^\n]\n"
    PUSH ESI                            ; 00492036
    INC EDI                             ; 00492037
    ADD EBP,0x20                        ; 00492038
    CALL FUN_005b8100                   ; 0049203b
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    MOV EAX,dword ptr [EBX + 0x1908]    ; 00492040
    ADD ESP,0xc                         ; 00492046
    CMP EDI,EAX                         ; 00492049
    JL 0x00492030                       ; 0049204b
        ;   XREF to: 00492030 (CONDITIONAL_JUMP)  ; LAB_00492030
    ADD ESP,0x110                       ; 0049204d
    POP EBP                             ; 00492053
    POP EDI                             ; 00492054
    POP ESI                             ; 00492055
    POP EBX                             ; 00492056
    RET                                 ; 00492057

