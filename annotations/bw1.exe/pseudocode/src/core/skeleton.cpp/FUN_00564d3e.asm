; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_skeleton_cpp_FUN_00564d3e(CDeformableModel *param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_00605888
;   undefined4 DAT_00612560
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_00563c40
;   core_xform.cpp_FUN_005b6270
;   engine_2d.c_drawText_FUN_00401fe0
;   engine_special.cpp_FUN_00580173
;
; *****************************************************************************

section .text

    MOV EDX,EDX                         ; 00564d3e
        ;   Label: core_skeleton.cpp_FUN_00564d3e
    PUSH EBX                            ; 00564d40
    PUSH ESI                            ; 00564d41
    PUSH EDI                            ; 00564d42
    PUSH EBP                            ; 00564d43
    SUB ESP,0x30                        ; 00564d44
    MOV EDX,dword ptr [ESP + 0x44]      ; 00564d47
    PUSH EDX                            ; 00564d4b
    CALL core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_00563c40 ; 00564d4c
        ;   XREF to: 00563c40 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_00563c40(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 00564d51
    MOV EBX,dword ptr [EAX + 0x1de78]   ; 00564d54
    XOR ECX,ECX                         ; 00564d5a
    MOV dword ptr [ESP + 0x24],EAX      ; 00564d5c
    MOV dword ptr [ESP + 0x28],ECX      ; 00564d60
    TEST EBX,EBX                        ; 00564d64
    JLE 0x00564e17                      ; 00564d66
        ;   XREF to: 00564e17 (CONDITIONAL_JUMP)  ; LAB_00564e17
    LEA EBP,[EAX + 0x1de7c]             ; 00564d6c
    MOV EAX,dword ptr [ESP + 0x48]      ; 00564d72
    MOV dword ptr [ESP + 0x2c],EAX      ; 00564d76
    MOV ECX,dword ptr [ESP + 0x2c]      ; 00564d7a
        ;   Label: LAB_00564d7a
    PUSH ECX                            ; 00564d7e
    LEA ESI,[ESP + 0x1c]                ; 00564d7f
    LEA EDI,[ESP + 0x10]                ; 00564d83
    CALL core_xform.cpp_FUN_005b6270    ; 00564d87
        ;   XREF to: 005b6270 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b6270()
    LEA ESI,[ESP + 0x1c]                ; 00564d8c
    ADD ESP,0x4                         ; 00564d90
    MOV EBX,ESP                         ; 00564d93
    MOVSD ES:EDI,ESI                    ; 00564d95
    MOVSD ES:EDI,ESI                    ; 00564d96
    MOVSD ES:EDI,ESI                    ; 00564d97
    LEA EAX,[ESP + 0xc]                 ; 00564d98
    MOV ESI,dword ptr [0x00612560]      ; 00564d9c | DAT_00612560
    FLD float ptr [EAX]                 ; 00564da2
    FMUL float ptr [0x00605888]         ; 00564da4 | DAT_00605888
    FISTP dword ptr [EBX]               ; 00564daa
    FLD float ptr [EAX + 0x4]           ; 00564dac
    FMUL float ptr [0x00605888]         ; 00564daf | DAT_00605888
    FISTP dword ptr [EBX + 0x4]         ; 00564db5
    FLD float ptr [EAX + 0x8]           ; 00564db8
    FMUL float ptr [0x00605888]         ; 00564dbb | DAT_00605888
    FISTP dword ptr [EBX + 0x8]         ; 00564dc1
    MOV EAX,ESP                         ; 00564dc4
    PUSH EAX                            ; 00564dc6
    MOV EAX,dword ptr [ESI]             ; 00564dc7
    ADD EAX,0xea5d0                     ; 00564dc9
    PUSH EAX                            ; 00564dce
    CALL engine_special.cpp_FUN_00580173 ; 00564dcf
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x00612560]                ; 00564dd4 | DAT_00612560
    MOV EAX,dword ptr [EAX]             ; 00564dd9
    ADD ESP,0x8                         ; 00564ddb
    MOV DL,byte ptr [EAX + 0xea5e3]     ; 00564dde
    ADD EAX,0xea5d0                     ; 00564de4
    TEST DL,0x80                        ; 00564de9
    JZ 0x00564e1f                       ; 00564dec
        ;   XREF to: 00564e1f (CONDITIONAL_JUMP)  ; LAB_00564e1f
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00564dee
        ;   Label: LAB_00564dee
    MOV EDI,dword ptr [ESP + 0x28]      ; 00564df2
    MOV EBX,dword ptr [ESP + 0x24]      ; 00564df6
    ADD EBP,0x24                        ; 00564dfa
    ADD ESI,0x30                        ; 00564dfd
    INC EDI                             ; 00564e00
    MOV EDX,dword ptr [EBX + 0x1de78]   ; 00564e01
    MOV dword ptr [ESP + 0x2c],ESI      ; 00564e07
    MOV dword ptr [ESP + 0x28],EDI      ; 00564e0b
    CMP EDI,EDX                         ; 00564e0f
    JL 0x00564d7a                       ; 00564e11
        ;   XREF to: 00564d7a (CONDITIONAL_JUMP)  ; LAB_00564d7a
    ADD ESP,0x30                        ; 00564e17
        ;   Label: LAB_00564e17
    POP EBP                             ; 00564e1a
    POP EDI                             ; 00564e1b
    POP ESI                             ; 00564e1c
    POP EBX                             ; 00564e1d
    RET                                 ; 00564e1e
    MOV EBX,dword ptr [EAX + 0x14]      ; 00564e1f
        ;   Label: LAB_00564e1f
    SAR EBX,0x10                        ; 00564e22
    MOV EAX,dword ptr [EAX + 0x10]      ; 00564e25
    PUSH EBX                            ; 00564e28
    SAR EAX,0x10                        ; 00564e29
    PUSH EAX                            ; 00564e2c
    PUSH EBP                            ; 00564e2d
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 00564e2e
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00564e33
    JMP 0x00564dee                      ; 00564e36
        ;   XREF to: 00564dee (UNCONDITIONAL_JUMP)  ; LAB_00564dee

