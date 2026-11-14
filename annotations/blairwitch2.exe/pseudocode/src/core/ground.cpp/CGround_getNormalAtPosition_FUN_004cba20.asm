; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3i * __stack3_esi core_ground_cpp_CGround_getNormalAtPosition_FUN_004cba20(CGround *this_ptr,int world_x,int world_z,CVector3i *out_normal)
;
; Parameters:
; CGround *        Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   world_x
; int              Stack[0xc]:4   world_z
;
; Called Functions:
;   engine_matrix.c_normalizeVector3DFloat_FUN_004e9ae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cba20
        ;   Label: core_ground.cpp_CGround_getNormalAtPosition_FUN_004cba20
    PUSH EDI                            ; 004cba21
    PUSH EBP                            ; 004cba22
    SUB ESP,0x54                        ; 004cba23
    MOV EDI,dword ptr [ESP + 0x6c]      ; 004cba26
    MOV EBP,ESI                         ; 004cba2a
    MOV ESI,dword ptr [ESP + 0x64]      ; 004cba2c
    MOV EBX,dword ptr [ESI + 0x1c]      ; 004cba30
    SHL EBX,0x8                         ; 004cba33
    LEA EAX,[EBX + -0x1]                ; 004cba36
    MOV EDX,0x10000                     ; 004cba39
    AND EAX,EDI                         ; 004cba3e
    IMUL EDX                            ; 004cba40
    IDIV EBX                            ; 004cba42
    MOV EBX,dword ptr [ESI + 0x1c]      ; 004cba44
    MOV EDX,dword ptr [ESP + 0x68]      ; 004cba47
    SHL EBX,0x8                         ; 004cba4b
    MOV dword ptr [ESP + 0x4c],EAX      ; 004cba4e
    LEA EAX,[EBX + -0x1]                ; 004cba52
    AND EAX,EDX                         ; 004cba55
    MOV EDX,0x10000                     ; 004cba57
    IMUL EDX                            ; 004cba5c
    IDIV EBX                            ; 004cba5e
    MOV dword ptr [ESP + 0x50],EAX      ; 004cba60
    MOV ECX,dword ptr [ESI + 0x1c]      ; 004cba64
    XOR EDX,EDX                         ; 004cba67
    SHL ECX,0x8                         ; 004cba69
    MOV EAX,EDI                         ; 004cba6c
    DIV ECX                             ; 004cba6e
    MOV EDI,dword ptr [ESI + 0x8]       ; 004cba70
    AND EDI,EAX                         ; 004cba73
    XOR EDX,EDX                         ; 004cba75
    MOV EAX,dword ptr [ESP + 0x68]      ; 004cba77
    DIV ECX                             ; 004cba7b
    MOV EDX,EDI                         ; 004cba7d
    MOV ECX,dword ptr [ESI + 0xc]       ; 004cba7f
    AND EDX,0x1                         ; 004cba82
    AND EAX,ECX                         ; 004cba85
    MOV dword ptr [ESP + 0x44],EDX      ; 004cba87
    MOV EDX,EAX                         ; 004cba8b
    MOV EBX,dword ptr [ESP + 0x44]      ; 004cba8d
    AND EDX,0x1                         ; 004cba91
    LEA ECX,[EAX + 0x1]                 ; 004cba94
    MOV dword ptr [ESP + 0x44],EDX      ; 004cba97
    LEA EDX,[EDI + 0x1]                 ; 004cba9b
    CMP EBX,dword ptr [ESP + 0x44]      ; 004cba9e
    JNZ 0x004cbbca                      ; 004cbaa2
        ;   XREF to: 004cbbca (CONDITIONAL_JUMP)  ; LAB_004cbbca
    MOV EBX,dword ptr [ESP + 0x4c]      ; 004cbaa8
    CMP EBX,dword ptr [ESP + 0x50]      ; 004cbaac
    JLE 0x004cbb42                      ; 004cbab0
        ;   XREF to: 004cbb42 (CONDITIONAL_JUMP)  ; LAB_004cbb42
    MOV EBX,dword ptr [ESI]             ; 004cbab6
    IMUL EBX,EAX                        ; 004cbab8
    MOV EAX,dword ptr [ESI + 0x24]      ; 004cbabb
    MOV dword ptr [ESP + 0x44],EBX      ; 004cbabe
    ADD EBX,EDI                         ; 004cbac2
    MOVSX EBX,word ptr [EAX + EBX*0x4]  ; 004cbac4
    MOV EDI,dword ptr [ESI + 0x20]      ; 004cbac8
    IMUL EBX,EDI                        ; 004cbacb
    MOV dword ptr [ESP + 0x3c],EBX      ; 004cbace
    MOV EBX,dword ptr [ESI + 0x8]       ; 004cbad2
    MOV EDI,dword ptr [ESP + 0x44]      ; 004cbad5
    AND EBX,EDX                         ; 004cbad9
    ADD EBX,EDI                         ; 004cbadb
    MOVSX EBX,word ptr [EAX + EBX*0x4]  ; 004cbadd
    IMUL EBX,dword ptr [ESI + 0x20]     ; 004cbae1
    AND ECX,dword ptr [ESI + 0xc]       ; 004cbae5
    IMUL ECX,dword ptr [ESI]            ; 004cbae8
    AND EDX,dword ptr [ESI + 0xc]       ; 004cbaeb
    ADD EDX,ECX                         ; 004cbaee
    MOVSX EAX,word ptr [EAX + EDX*0x4]  ; 004cbaf0
    MOV EDX,dword ptr [ESI + 0x20]      ; 004cbaf4
    IMUL EDX,EAX                        ; 004cbaf7
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004cbafa
    SUB EAX,EBX                         ; 004cbafe
    MOV dword ptr [ESP + 0x24],EAX      ; 004cbb00
    MOV EAX,dword ptr [ESI + 0x1c]      ; 004cbb04
    SHL EAX,0x8                         ; 004cbb07
    LEA EDI,[ESP + 0x24]                ; 004cbb0a
    MOV dword ptr [ESP + 0x28],EAX      ; 004cbb0e
    LEA EAX,[ESP + 0x24]                ; 004cbb12
    SUB EBX,EDX                         ; 004cbb16
    PUSH EAX                            ; 004cbb18
    LEA ESI,[ESP + 0x10]                ; 004cbb19
    MOV dword ptr [ESP + 0x30],EBX      ; 004cbb1d
    CALL engine_matrix.c_normalizeVector3DFloat_FUN_004e9ae0 ; 004cbb21
        ;   XREF to: 004e9ae0 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_normalizeVector3DFloat_FUN_004e9ae0()
    LEA ESI,[ESP + 0x10]                ; 004cbb26
    ADD ESP,0x4                         ; 004cbb2a
        ;   Label: LAB_004cbb2a
    MOVSD ES:EDI,ESI                    ; 004cbb2d
    MOVSD ES:EDI,ESI                    ; 004cbb2e
    MOVSD ES:EDI,ESI                    ; 004cbb2f
    LEA ESI,[ESP + 0x24]                ; 004cbb30
    MOV EDI,EBP                         ; 004cbb34
    MOVSD ES:EDI,ESI                    ; 004cbb36
    MOVSD ES:EDI,ESI                    ; 004cbb37
    MOVSD ES:EDI,ESI                    ; 004cbb38
    MOV EAX,EBP                         ; 004cbb39
    ADD ESP,0x54                        ; 004cbb3b
    POP EBP                             ; 004cbb3e
    POP EDI                             ; 004cbb3f
    POP EBX                             ; 004cbb40
    RET                                 ; 004cbb41
    IMUL EAX,dword ptr [ESI]            ; 004cbb42
        ;   Label: LAB_004cbb42
    ADD EAX,EDI                         ; 004cbb45
    MOV EBX,dword ptr [ESI + 0x24]      ; 004cbb47
    SHL EAX,0x2                         ; 004cbb4a
    ADD EAX,EBX                         ; 004cbb4d
    MOV dword ptr [ESP + 0x44],EBX      ; 004cbb4f
    MOVSX EAX,word ptr [EAX]            ; 004cbb53
    MOV EBX,dword ptr [ESI + 0x20]      ; 004cbb56
    IMUL EAX,EBX                        ; 004cbb59
    MOV dword ptr [ESP + 0x3c],EAX      ; 004cbb5c
    MOV EAX,dword ptr [ESI + 0xc]       ; 004cbb60
    AND EAX,ECX                         ; 004cbb63
    IMUL EAX,dword ptr [ESI]            ; 004cbb65
    AND EDX,dword ptr [ESI + 0x8]       ; 004cbb68
    ADD EDX,EAX                         ; 004cbb6b
    MOV ECX,dword ptr [ESP + 0x44]      ; 004cbb6d
    SHL EDX,0x2                         ; 004cbb71
    ADD EDX,ECX                         ; 004cbb74
    MOVSX EDX,word ptr [EDX]            ; 004cbb76
    MOV ECX,dword ptr [ESI + 0x20]      ; 004cbb79
    IMUL ECX,EDX                        ; 004cbb7c
    ADD EAX,EDI                         ; 004cbb7f
    MOV EBX,dword ptr [ESP + 0x44]      ; 004cbb81
    SHL EAX,0x2                         ; 004cbb85
    ADD EAX,EBX                         ; 004cbb88
    MOV EDI,dword ptr [ESI + 0x20]      ; 004cbb8a
    MOVSX EDX,word ptr [EAX]            ; 004cbb8d
    IMUL EDX,EDI                        ; 004cbb90
    MOV EAX,EDX                         ; 004cbb93
    SUB EAX,ECX                         ; 004cbb95
    MOV dword ptr [ESP + 0x24],EAX      ; 004cbb97
    MOV EAX,dword ptr [ESI + 0x1c]      ; 004cbb9b
    SHL EAX,0x8                         ; 004cbb9e
    MOV dword ptr [ESP + 0x28],EAX      ; 004cbba1
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004cbba5
    SUB EAX,EDX                         ; 004cbba9
    MOV dword ptr [ESP + 0x2c],EAX      ; 004cbbab
    LEA EAX,[ESP + 0x24]                ; 004cbbaf
    PUSH EAX                            ; 004cbbb3
    LEA ESI,[ESP + 0x34]                ; 004cbbb4
    LEA EDI,[ESP + 0x28]                ; 004cbbb8
    CALL engine_matrix.c_normalizeVector3DFloat_FUN_004e9ae0 ; 004cbbbc
        ;   XREF to: 004e9ae0 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_normalizeVector3DFloat_FUN_004e9ae0()
    LEA ESI,[ESP + 0x34]                ; 004cbbc1
    JMP 0x004cbb2a                      ; 004cbbc5
        ;   XREF to: 004cbb2a (UNCONDITIONAL_JUMP)  ; LAB_004cbb2a
    MOV EBX,0x10000                     ; 004cbbca
        ;   Label: LAB_004cbbca
    SUB EBX,dword ptr [ESP + 0x4c]      ; 004cbbcf
    CMP EBX,dword ptr [ESP + 0x50]      ; 004cbbd3
    JLE 0x004cbc70                      ; 004cbbd7
        ;   XREF to: 004cbc70 (CONDITIONAL_JUMP)  ; LAB_004cbc70
    MOV EBX,dword ptr [ESI]             ; 004cbbdd
    IMUL EBX,EAX                        ; 004cbbdf
    MOV dword ptr [ESP + 0x44],EBX      ; 004cbbe2
    LEA EAX,[EBX + EDI*0x1]             ; 004cbbe6
    SHL EAX,0x2                         ; 004cbbe9
    MOV EBX,dword ptr [ESI + 0x24]      ; 004cbbec
    ADD EAX,EBX                         ; 004cbbef
    MOV dword ptr [ESP + 0x48],EBX      ; 004cbbf1
    MOVSX EAX,word ptr [EAX]            ; 004cbbf5
    MOV EBX,dword ptr [ESI + 0x20]      ; 004cbbf8
    IMUL EBX,EAX                        ; 004cbbfb
    AND EDX,dword ptr [ESI + 0x8]       ; 004cbbfe
    ADD EDX,dword ptr [ESP + 0x44]      ; 004cbc01
    MOV EAX,dword ptr [ESP + 0x48]      ; 004cbc05
    SHL EDX,0x2                         ; 004cbc09
    ADD EDX,EAX                         ; 004cbc0c
    MOVSX EAX,word ptr [EDX]            ; 004cbc0e
    MOV EDX,dword ptr [ESI + 0x20]      ; 004cbc11
    IMUL EAX,EDX                        ; 004cbc14
    MOV dword ptr [ESP + 0x40],EAX      ; 004cbc17
    MOV EAX,dword ptr [ESI + 0xc]       ; 004cbc1b
    MOV EDX,dword ptr [ESI]             ; 004cbc1e
    AND ECX,EAX                         ; 004cbc20
    IMUL ECX,EDX                        ; 004cbc22
    ADD EDI,ECX                         ; 004cbc25
    MOV ECX,dword ptr [ESP + 0x48]      ; 004cbc27
    SHL EDI,0x2                         ; 004cbc2b
    ADD EDI,ECX                         ; 004cbc2e
    MOV EDX,dword ptr [ESI + 0x20]      ; 004cbc30
    MOVSX EAX,word ptr [EDI]            ; 004cbc33
    IMUL EDX,EAX                        ; 004cbc36
    MOV EDI,dword ptr [ESP + 0x40]      ; 004cbc39
    MOV EAX,EBX                         ; 004cbc3d
    SUB EAX,EDI                         ; 004cbc3f
    MOV dword ptr [ESP + 0x24],EAX      ; 004cbc41
    MOV EAX,dword ptr [ESI + 0x1c]      ; 004cbc45
    SHL EAX,0x8                         ; 004cbc48
    SUB EBX,EDX                         ; 004cbc4b
    MOV dword ptr [ESP + 0x28],EAX      ; 004cbc4d
    LEA EAX,[ESP + 0x24]                ; 004cbc51
    LEA EDI,[ESP + 0x24]                ; 004cbc55
    PUSH EAX                            ; 004cbc59
    LEA ESI,[ESP + 0x4]                 ; 004cbc5a
    MOV dword ptr [ESP + 0x30],EBX      ; 004cbc5e
    CALL engine_matrix.c_normalizeVector3DFloat_FUN_004e9ae0 ; 004cbc62
        ;   XREF to: 004e9ae0 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_normalizeVector3DFloat_FUN_004e9ae0()
    LEA ESI,[ESP + 0x4]                 ; 004cbc67
    JMP 0x004cbb2a                      ; 004cbc6b
        ;   XREF to: 004cbb2a (UNCONDITIONAL_JUMP)  ; LAB_004cbb2a
    MOV EBX,dword ptr [ESI + 0x8]       ; 004cbc70
        ;   Label: LAB_004cbc70
    AND EBX,EDX                         ; 004cbc73
    MOV dword ptr [ESP + 0x48],EBX      ; 004cbc75
    IMUL EAX,dword ptr [ESI]            ; 004cbc79
    ADD EAX,dword ptr [ESP + 0x48]      ; 004cbc7c
    LEA EDX,[EAX*0x4 + 0x0]             ; 004cbc80
    MOV EAX,dword ptr [ESI + 0x24]      ; 004cbc87
    MOV EBX,dword ptr [ESI + 0x20]      ; 004cbc8a
    MOVSX EDX,word ptr [EDX + EAX*0x1]  ; 004cbc8d
    IMUL EBX,EDX                        ; 004cbc91
    MOV dword ptr [ESP + 0x40],EBX      ; 004cbc94
    MOV EBX,dword ptr [ESI + 0xc]       ; 004cbc98
    MOV EDX,dword ptr [ESI]             ; 004cbc9b
    AND ECX,EBX                         ; 004cbc9d
    IMUL ECX,EDX                        ; 004cbc9f
    MOV EDX,dword ptr [ESP + 0x48]      ; 004cbca2
    ADD EDX,ECX                         ; 004cbca6
    MOV EBX,dword ptr [ESI + 0x20]      ; 004cbca8
    MOVSX EDX,word ptr [EAX + EDX*0x4]  ; 004cbcab
    IMUL EDX,EBX                        ; 004cbcaf
    ADD ECX,EDI                         ; 004cbcb2
    MOVSX EAX,word ptr [EAX + ECX*0x4]  ; 004cbcb4
    IMUL EAX,EBX                        ; 004cbcb8
    SUB EAX,EDX                         ; 004cbcbb
    MOV dword ptr [ESP + 0x24],EAX      ; 004cbcbd
    MOV EAX,dword ptr [ESI + 0x1c]      ; 004cbcc1
    SHL EAX,0x8                         ; 004cbcc4
    MOV dword ptr [ESP + 0x28],EAX      ; 004cbcc7
    MOV EAX,dword ptr [ESP + 0x40]      ; 004cbccb
    SUB EAX,EDX                         ; 004cbccf
    MOV dword ptr [ESP + 0x2c],EAX      ; 004cbcd1
    LEA EAX,[ESP + 0x24]                ; 004cbcd5
    PUSH EAX                            ; 004cbcd9
    LEA ESI,[ESP + 0x1c]                ; 004cbcda
    LEA EDI,[ESP + 0x28]                ; 004cbcde
    CALL engine_matrix.c_normalizeVector3DFloat_FUN_004e9ae0 ; 004cbce2
        ;   XREF to: 004e9ae0 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_normalizeVector3DFloat_FUN_004e9ae0()
    LEA ESI,[ESP + 0x1c]                ; 004cbce7
    JMP 0x004cbb2a                      ; 004cbceb
        ;   XREF to: 004cbb2a (UNCONDITIONAL_JUMP)  ; LAB_004cbb2a

