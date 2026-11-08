; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00547cb0(int param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00547c20 at 00547c46
;
; Referenced Globals:
;   undefined4 DAT_005d16a9
;   TerminatedCString s_core_skeleton_cpp_005d16ad
;   TerminatedCString s_Invalid_skeleton_version_005d16c2
;   TerminatedCString s_core_skeleton_cpp_005d16db
;   TerminatedCString s_Old_skeleton_version_d_n_005d16f0
;   TerminatedCString s_core_skeleton_cpp_005d1716
;   TerminatedCString s_Skeleton_version_d_is_ne_005d172b
;   TerminatedCString s_d_d_005d177b
;   TerminatedCString s_d_005d1782
;   TerminatedCString s_f_f_f_f_005d178e
;   TerminatedCString s_f_f_f_005d179b
;   TerminatedCString s_f_f_f_005d17a5
;   TerminatedCString s_core_skeleton_cpp_005d17af
;   TerminatedCString s_CSkeleton_loadStream_err_005d17c4
;   TerminatedCString s_core_skeleton_cpp_005d17f0
;   ... and 4 more
;
; Called Functions:
;   FUN_004e4330
;   FUN_004fb280
;   FUN_00547a80
;   FUN_00547b90
;   FUN_005a3230
;   FUN_005a32b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00547cb0
        ;   Label: FUN_00547cb0
    PUSH ESI                            ; 00547cb1
    PUSH EDI                            ; 00547cb2
    PUSH EBP                            ; 00547cb3
    SUB ESP,0x14                        ; 00547cb4
    PUSH 0x1                            ; 00547cb7
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00547cb9
    PUSH EDX                            ; 00547cbd
    CALL FUN_00547b90                   ; 00547cbe
        ;   XREF to: 00547b90 (UNCONDITIONAL_CALL)  ; undefined FUN_00547b90()
    ADD ESP,0x8                         ; 00547cc3
    MOV ECX,0xffffffff                  ; 00547cc6
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00547ccb
    MOV dword ptr [ESP],ECX             ; 00547ccf
    PUSH EBX                            ; 00547cd2
        ;   Label: LAB_00547cd2
    CALL FUN_005a32b0                   ; 00547cd3
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a32b0()
    ADD ESP,0x4                         ; 00547cd8
    TEST EAX,EAX                        ; 00547cdb
    JL 0x00547ce4                       ; 00547cdd
        ;   XREF to: 00547ce4 (CONDITIONAL_JUMP)  ; LAB_00547ce4
    CMP EAX,0xa                         ; 00547cdf
    JNZ 0x00547cd2                      ; 00547ce2
        ;   XREF to: 00547cd2 (CONDITIONAL_JUMP)  ; LAB_00547cd2
    MOV EAX,ESP                         ; 00547ce4
        ;   Label: LAB_00547ce4
    PUSH EAX                            ; 00547ce6
    PUSH 0x5d16a9                       ; 00547ce7 | DAT_005d16a9
    MOV EBX,dword ptr [ESP + 0x34]      ; 00547cec
    PUSH EBX                            ; 00547cf0
    CALL FUN_005a3230                   ; 00547cf1
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    ADD ESP,0xc                         ; 00547cf6
    CMP dword ptr [ESP],0x1             ; 00547cf9
    JGE 0x00547d22                      ; 00547cfd
        ;   XREF to: 00547d22 (CONDITIONAL_JUMP)  ; LAB_00547d22
    MOV EDI,0x5d16ad                    ; 00547cff | = "..\\core\\skeleton.cpp"
    MOV EBP,0x119                       ; 00547d04
    PUSH 0x5d16c2                       ; 00547d09 | = "Invalid skeleton version"
    MOV dword ptr [0x01d71de0],EDI      ; 00547d0e | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBP      ; 00547d14 | DAT_01d71de4
    CALL FUN_004e4330                   ; 00547d1a
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 00547d1f
    MOV EAX,dword ptr [ESP]             ; 00547d22
        ;   Label: LAB_00547d22
    CMP EAX,0x2                         ; 00547d25
    JGE 0x00547d4e                      ; 00547d28
        ;   XREF to: 00547d4e (CONDITIONAL_JUMP)  ; LAB_00547d4e
    PUSH EAX                            ; 00547d2a
    MOV EDX,0x5d16db                    ; 00547d2b | = "..\\core\\skeleton.cpp"
    MOV ECX,0x11a                       ; 00547d30
    PUSH 0x5d16f0                       ; 00547d35 | = "Old skeleton version %d not supported"
    MOV dword ptr [0x01d71de0],EDX      ; 00547d3a | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 00547d40 | DAT_01d71de4
    CALL FUN_004e4330                   ; 00547d46
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x8                         ; 00547d4b
    MOV EAX,dword ptr [ESP]             ; 00547d4e
        ;   Label: LAB_00547d4e
    MOV ESI,dword ptr [0x00604170]      ; 00547d51 | DAT_00604170
    CMP EAX,ESI                         ; 00547d57
    JG 0x0054802f                       ; 00547d59
        ;   XREF to: 0054802f (CONDITIONAL_JUMP)  ; LAB_0054802f
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00547d5f
        ;   Label: LAB_00547d5f
    PUSH EBX                            ; 00547d63
        ;   Label: LAB_00547d63
    CALL FUN_005a32b0                   ; 00547d64
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a32b0()
    ADD ESP,0x4                         ; 00547d69
    TEST EAX,EAX                        ; 00547d6c
    JL 0x00547d75                       ; 00547d6e
        ;   XREF to: 00547d75 (CONDITIONAL_JUMP)  ; LAB_00547d75
    CMP EAX,0xa                         ; 00547d70
    JNZ 0x00547d63                      ; 00547d73
        ;   XREF to: 00547d63 (CONDITIONAL_JUMP)  ; LAB_00547d63
    LEA EAX,[ESP + 0x8]                 ; 00547d75
        ;   Label: LAB_00547d75
    PUSH EAX                            ; 00547d79
    LEA EAX,[ESP + 0x8]                 ; 00547d7a
    PUSH EAX                            ; 00547d7e
    PUSH 0x5d177b                       ; 00547d7f | = "%d,%d\n"
    MOV ECX,dword ptr [ESP + 0x38]      ; 00547d84
    PUSH ECX                            ; 00547d88
    CALL FUN_005a3230                   ; 00547d89
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    ADD ESP,0x10                        ; 00547d8e
    MOV EBX,dword ptr [ESP + 0x8]       ; 00547d91
    PUSH EBX                            ; 00547d95
    MOV ESI,dword ptr [ESP + 0x8]       ; 00547d96
    PUSH ESI                            ; 00547d9a
    MOV EDI,dword ptr [ESP + 0x30]      ; 00547d9b
    PUSH EDI                            ; 00547d9f
    CALL FUN_00547a80                   ; 00547da0
        ;   XREF to: 00547a80 (UNCONDITIONAL_CALL)  ; undefined FUN_00547a80()
    ADD ESP,0xc                         ; 00547da5
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00547da8
    PUSH EBX                            ; 00547dac
        ;   Label: LAB_00547dac
    CALL FUN_005a32b0                   ; 00547dad
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a32b0()
    ADD ESP,0x4                         ; 00547db2
    TEST EAX,EAX                        ; 00547db5
    JL 0x00547dbe                       ; 00547db7
        ;   XREF to: 00547dbe (CONDITIONAL_JUMP)  ; LAB_00547dbe
    CMP EAX,0xa                         ; 00547db9
    JNZ 0x00547dac                      ; 00547dbc
        ;   XREF to: 00547dac (CONDITIONAL_JUMP)  ; LAB_00547dac
    MOV EAX,dword ptr [ESP + 0x28]      ; 00547dbe
        ;   Label: LAB_00547dbe
    MOV EBP,dword ptr [EAX + 0x1de78]   ; 00547dc2
    XOR EBX,EBX                         ; 00547dc8
    TEST EBP,EBP                        ; 00547dca
    JLE 0x00547e10                      ; 00547dcc
        ;   XREF to: 00547e10 (CONDITIONAL_JUMP)  ; LAB_00547e10
    LEA EDI,[EAX + 0x1de7c]             ; 00547dce
    LEA ESI,[EAX + 0x1de9c]             ; 00547dd4
    IMUL EAX,EBX,0x24                   ; 00547dda
        ;   Label: LAB_00547dda
    PUSH ESI                            ; 00547ddd
    ADD EAX,EDI                         ; 00547dde
    PUSH EAX                            ; 00547de0
    PUSH 0x5d1782                       ; 00547de1 | = "\"%[^\"]\",%d\n"
    MOV EAX,dword ptr [ESP + 0x38]      ; 00547de6
    PUSH EAX                            ; 00547dea
    CALL FUN_005a3230                   ; 00547deb
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    ADD ESP,0x10                        ; 00547df0
    MOV EAX,dword ptr [ESP + 0x28]      ; 00547df3
    INC EBX                             ; 00547df7
    MOV EDX,dword ptr [EAX + 0x1de78]   ; 00547df8
    ADD ESI,0x24                        ; 00547dfe
    CMP EBX,EDX                         ; 00547e01
    JL 0x00547dda                       ; 00547e03
        ;   XREF to: 00547dda (CONDITIONAL_JUMP)  ; LAB_00547dda
    LEA EAX,[EAX]                       ; 00547e05
    LEA EDX,[EDX]                       ; 00547e0b
    MOV EBX,EBX                         ; 00547e0e
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00547e10
        ;   Label: LAB_00547e10
    PUSH ESI                            ; 00547e14
        ;   Label: LAB_00547e14
    CALL FUN_005a32b0                   ; 00547e15
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a32b0()
    ADD ESP,0x4                         ; 00547e1a
    TEST EAX,EAX                        ; 00547e1d
    JL 0x00547e26                       ; 00547e1f
        ;   XREF to: 00547e26 (CONDITIONAL_JUMP)  ; LAB_00547e26
    CMP EAX,0xa                         ; 00547e21
    JNZ 0x00547e14                      ; 00547e24
        ;   XREF to: 00547e14 (CONDITIONAL_JUMP)  ; LAB_00547e14
    MOV EAX,dword ptr [ESP + 0x28]      ; 00547e26
        ;   Label: LAB_00547e26
    XOR ECX,ECX                         ; 00547e2a
    MOV EBX,dword ptr [ESP + 0x28]      ; 00547e2c
    MOV dword ptr [ESP + 0xc],ECX       ; 00547e30
    MOV ESI,dword ptr [EAX + 0x1ec8c]   ; 00547e34
    MOV EBX,dword ptr [EBX + 0x1ec90]   ; 00547e3a
    TEST ESI,ESI                        ; 00547e40
    JLE 0x00547eb5                      ; 00547e42
        ;   XREF to: 00547eb5 (CONDITIONAL_JUMP)  ; LAB_00547eb5
    MOV EAX,dword ptr [ESP + 0x28]      ; 00547e44
        ;   Label: LAB_00547e44
    MOV EDX,dword ptr [EAX + 0x1de78]   ; 00547e48
    XOR EDI,EDI                         ; 00547e4e
    TEST EDX,EDX                        ; 00547e50
    JLE 0x00547e9e                      ; 00547e52
        ;   XREF to: 00547e9e (CONDITIONAL_JUMP)  ; LAB_00547e9e
    LEA EAX,[EBX + 0x4]                 ; 00547e54
    LEA ESI,[EBX + 0x8]                 ; 00547e57
    MOV dword ptr [ESP + 0x10],EAX      ; 00547e5a
    LEA EBP,[EBX + 0xc]                 ; 00547e5e
    PUSH EBP                            ; 00547e61
        ;   Label: LAB_00547e61
    PUSH ESI                            ; 00547e62
    MOV EAX,dword ptr [ESP + 0x18]      ; 00547e63
    PUSH EAX                            ; 00547e67
    PUSH EBX                            ; 00547e68
    PUSH 0x5d178e                       ; 00547e69 | = "%f,%f,%f,%f\n"
    MOV EDX,dword ptr [ESP + 0x40]      ; 00547e6e
    PUSH EDX                            ; 00547e72
    INC EDI                             ; 00547e73
    ADD EBP,0x10                        ; 00547e74
    CALL FUN_005a3230                   ; 00547e77
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    ADD ESP,0x18                        ; 00547e7c
    ADD ESI,0x10                        ; 00547e7f
    MOV ECX,dword ptr [ESP + 0x10]      ; 00547e82
    MOV EAX,dword ptr [ESP + 0x28]      ; 00547e86
    ADD EBX,0x10                        ; 00547e8a
    ADD ECX,0x10                        ; 00547e8d
    MOV EDX,dword ptr [EAX + 0x1de78]   ; 00547e90
    MOV dword ptr [ESP + 0x10],ECX      ; 00547e96
    CMP EDI,EDX                         ; 00547e9a
    JL 0x00547e61                       ; 00547e9c
        ;   XREF to: 00547e61 (CONDITIONAL_JUMP)  ; LAB_00547e61
    MOV EDI,dword ptr [ESP + 0xc]       ; 00547e9e
        ;   Label: LAB_00547e9e
    MOV ESI,dword ptr [ESP + 0x28]      ; 00547ea2
    INC EDI                             ; 00547ea6
    MOV EBP,dword ptr [ESI + 0x1ec8c]   ; 00547ea7
    MOV dword ptr [ESP + 0xc],EDI       ; 00547ead
    CMP EDI,EBP                         ; 00547eb1
    JL 0x00547e44                       ; 00547eb3
        ;   XREF to: 00547e44 (CONDITIONAL_JUMP)  ; LAB_00547e44
    MOV EDI,dword ptr [ESP + 0x2c]      ; 00547eb5
        ;   Label: LAB_00547eb5
    PUSH EDI                            ; 00547eb9
        ;   Label: LAB_00547eb9
    CALL FUN_005a32b0                   ; 00547eba
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a32b0()
    ADD ESP,0x4                         ; 00547ebf
    TEST EAX,EAX                        ; 00547ec2
    JL 0x00547ecb                       ; 00547ec4
        ;   XREF to: 00547ecb (CONDITIONAL_JUMP)  ; LAB_00547ecb
    CMP EAX,0xa                         ; 00547ec6
    JNZ 0x00547eb9                      ; 00547ec9
        ;   XREF to: 00547eb9 (CONDITIONAL_JUMP)  ; LAB_00547eb9
    MOV EAX,dword ptr [ESP + 0x28]      ; 00547ecb
        ;   Label: LAB_00547ecb
    MOV ECX,dword ptr [EAX + 0x1ec8c]   ; 00547ecf
    XOR EBX,EBX                         ; 00547ed5
    TEST ECX,ECX                        ; 00547ed7
    JLE 0x00547f20                      ; 00547ed9
        ;   XREF to: 00547f20 (CONDITIONAL_JUMP)  ; LAB_00547f20
    XOR ESI,ESI                         ; 00547edb
    MOV EAX,dword ptr [ESP + 0x28]      ; 00547edd
        ;   Label: LAB_00547edd
    MOV EAX,dword ptr [EAX + 0x1ec94]   ; 00547ee1
    ADD EAX,ESI                         ; 00547ee7
    LEA EDI,[EAX + 0x8]                 ; 00547ee9
    PUSH EDI                            ; 00547eec
    LEA EDI,[EAX + 0x4]                 ; 00547eed
    PUSH EDI                            ; 00547ef0
    PUSH EAX                            ; 00547ef1
    PUSH 0x5d179b                       ; 00547ef2 | = "%f,%f,%f\n"
    MOV EDI,dword ptr [ESP + 0x3c]      ; 00547ef7
    PUSH EDI                            ; 00547efb
    CALL FUN_005a3230                   ; 00547efc
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    ADD ESP,0x14                        ; 00547f01
    MOV EAX,dword ptr [ESP + 0x28]      ; 00547f04
    INC EBX                             ; 00547f08
    MOV EBP,dword ptr [EAX + 0x1ec8c]   ; 00547f09
    ADD ESI,0xc                         ; 00547f0f
    CMP EBX,EBP                         ; 00547f12
    JL 0x00547edd                       ; 00547f14
        ;   XREF to: 00547edd (CONDITIONAL_JUMP)  ; LAB_00547edd
    LEA EAX,[EAX]                       ; 00547f16
    LEA EDX,[EDX]                       ; 00547f1c
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00547f20
        ;   Label: LAB_00547f20
    PUSH ESI                            ; 00547f24
        ;   Label: LAB_00547f24
    CALL FUN_005a32b0                   ; 00547f25
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a32b0()
    ADD ESP,0x4                         ; 00547f2a
    TEST EAX,EAX                        ; 00547f2d
    JL 0x00547f36                       ; 00547f2f
        ;   XREF to: 00547f36 (CONDITIONAL_JUMP)  ; LAB_00547f36
    CMP EAX,0xa                         ; 00547f31
    JNZ 0x00547f24                      ; 00547f34
        ;   XREF to: 00547f24 (CONDITIONAL_JUMP)  ; LAB_00547f24
    MOV EAX,dword ptr [ESP + 0x28]      ; 00547f36
        ;   Label: LAB_00547f36
    MOV EDX,dword ptr [EAX + 0x1ec8c]   ; 00547f3a
    XOR EBX,EBX                         ; 00547f40
    TEST EDX,EDX                        ; 00547f42
    JLE 0x00547f90                      ; 00547f44
        ;   XREF to: 00547f90 (CONDITIONAL_JUMP)  ; LAB_00547f90
    XOR ESI,ESI                         ; 00547f46
    MOV EAX,dword ptr [ESP + 0x28]      ; 00547f48
        ;   Label: LAB_00547f48
    MOV EAX,dword ptr [EAX + 0x1ec98]   ; 00547f4c
    ADD EAX,ESI                         ; 00547f52
    LEA EDI,[EAX + 0x8]                 ; 00547f54
    PUSH EDI                            ; 00547f57
    LEA EDI,[EAX + 0x4]                 ; 00547f58
    PUSH EDI                            ; 00547f5b
    PUSH EAX                            ; 00547f5c
    PUSH 0x5d17a5                       ; 00547f5d | = "%f,%f,%f\n"
    MOV ECX,dword ptr [ESP + 0x3c]      ; 00547f62
    PUSH ECX                            ; 00547f66
    CALL FUN_005a3230                   ; 00547f67
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    ADD ESP,0x14                        ; 00547f6c
    MOV EAX,dword ptr [ESP + 0x28]      ; 00547f6f
    INC EBX                             ; 00547f73
    MOV EDI,dword ptr [EAX + 0x1ec8c]   ; 00547f74
    ADD ESI,0xc                         ; 00547f7a
    CMP EBX,EDI                         ; 00547f7d
    JL 0x00547f48                       ; 00547f7f
        ;   XREF to: 00547f48 (CONDITIONAL_JUMP)  ; LAB_00547f48
    LEA EAX,[EAX]                       ; 00547f81
    LEA EDX,[EDX]                       ; 00547f87
    LEA EAX,[EAX]                       ; 00547f8d
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00547f90
        ;   Label: LAB_00547f90
    TEST byte ptr [EAX + 0xc],0x20      ; 00547f94
    JZ 0x00547fbc                       ; 00547f98
        ;   XREF to: 00547fbc (CONDITIONAL_JUMP)  ; LAB_00547fbc
    MOV EBP,0x5d17af                    ; 00547f9a | = "..\\core\\skeleton.cpp"
    MOV EAX,0x150                       ; 00547f9f
    PUSH 0x5d17c4                       ; 00547fa4 | = "CSkeleton::loadStream - error reading..."
    MOV dword ptr [0x01d71de0],EBP      ; 00547fa9 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 00547faf | DAT_01d71de4
    CALL FUN_004e4330                   ; 00547fb4
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 00547fb9
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00547fbc
        ;   Label: LAB_00547fbc
    PUSH EDX                            ; 00547fc0
    MOV ECX,dword ptr [ESP + 0x2c]      ; 00547fc1
    PUSH ECX                            ; 00547fc5
    CALL FUN_004fb280                   ; 00547fc6
        ;   XREF to: 004fb280 (UNCONDITIONAL_CALL)  ; undefined FUN_004fb280()
    ADD ESP,0x8                         ; 00547fcb
    CMP dword ptr [ESP],0x3             ; 00547fce
    JL 0x0054801d                       ; 00547fd2
        ;   XREF to: 0054801d (CONDITIONAL_JUMP)  ; LAB_0054801d
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00547fd4
    PUSH ESI                            ; 00547fd8
        ;   Label: LAB_00547fd8
    CALL FUN_005a32b0                   ; 00547fd9
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a32b0()
    ADD ESP,0x4                         ; 00547fde
    TEST EAX,EAX                        ; 00547fe1
    JL 0x00547fea                       ; 00547fe3
        ;   XREF to: 00547fea (CONDITIONAL_JUMP)  ; LAB_00547fea
    CMP EAX,0xa                         ; 00547fe5
    JNZ 0x00547fd8                      ; 00547fe8
        ;   XREF to: 00547fd8 (CONDITIONAL_JUMP)  ; LAB_00547fd8
    MOV EAX,dword ptr [ESP + 0x28]      ; 00547fea
        ;   Label: LAB_00547fea
    MOV EDI,dword ptr [EAX + 0x1de78]   ; 00547fee
    XOR ESI,ESI                         ; 00547ff4
    TEST EDI,EDI                        ; 00547ff6
    JLE 0x0054801d                      ; 00547ff8
        ;   XREF to: 0054801d (CONDITIONAL_JUMP)  ; LAB_0054801d
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00547ffa
    PUSH EBX                            ; 00547ffe
        ;   Label: LAB_00547ffe
    CALL FUN_005a32b0                   ; 00547fff
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a32b0()
    ADD ESP,0x4                         ; 00548004
    TEST EAX,EAX                        ; 00548007
    JL 0x00548010                       ; 00548009
        ;   XREF to: 00548010 (CONDITIONAL_JUMP)  ; LAB_00548010
    CMP EAX,0xa                         ; 0054800b
    JNZ 0x00547ffe                      ; 0054800e
        ;   XREF to: 00547ffe (CONDITIONAL_JUMP)  ; LAB_00547ffe
    MOV EAX,dword ptr [ESP + 0x28]      ; 00548010
        ;   Label: LAB_00548010
    INC ESI                             ; 00548014
    CMP ESI,dword ptr [EAX + 0x1de78]   ; 00548015
    JL 0x00547ffe                       ; 0054801b
        ;   XREF to: 00547ffe (CONDITIONAL_JUMP)  ; LAB_00547ffe
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0054801d
        ;   Label: LAB_0054801d
    TEST byte ptr [EAX + 0xc],0x20      ; 00548021
    JNZ 0x00548059                      ; 00548025
        ;   XREF to: 00548059 (CONDITIONAL_JUMP)  ; LAB_00548059
    ADD ESP,0x14                        ; 00548027
    POP EBP                             ; 0054802a
    POP EDI                             ; 0054802b
    POP ESI                             ; 0054802c
    POP EBX                             ; 0054802d
    RET                                 ; 0054802e
    PUSH ESI                            ; 0054802f
        ;   Label: LAB_0054802f
    PUSH EAX                            ; 00548030
    MOV EDI,0x5d1716                    ; 00548031 | = "..\\core\\skeleton.cpp"
    MOV EBP,0x11b                       ; 00548036
    PUSH 0x5d172b                       ; 0054803b | = "Skeleton version %d is newer than .EX..."
    MOV dword ptr [0x01d71de0],EDI      ; 00548040 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBP      ; 00548046 | DAT_01d71de4
    CALL FUN_004e4330                   ; 0054804c
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0xc                         ; 00548051
    JMP 0x00547d5f                      ; 00548054
        ;   XREF to: 00547d5f (UNCONDITIONAL_JUMP)  ; LAB_00547d5f
    MOV EBX,0x5d17f0                    ; 00548059 | = "..\\core\\skeleton.cpp"
        ;   Label: LAB_00548059
    MOV ESI,0x16b                       ; 0054805e
    PUSH 0x5d1805                       ; 00548063 | = "CSkeleton::loadStream - error reading..."
    MOV dword ptr [0x01d71de0],EBX      ; 00548068 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 0054806e | DAT_01d71de4
    CALL FUN_004e4330                   ; 00548074
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 00548079
    ADD ESP,0x14                        ; 0054807c
    POP EBP                             ; 0054807f
    POP EDI                             ; 00548080
    POP ESI                             ; 00548081
    POP EBX                             ; 00548082
    RET                                 ; 00548083

