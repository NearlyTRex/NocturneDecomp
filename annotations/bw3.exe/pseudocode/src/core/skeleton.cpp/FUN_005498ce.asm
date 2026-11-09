; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_skeleton_cpp_FUN_005498ce(CDeformableModel *param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005e4758
;   undefined4 DAT_005f2afc
;
; Called Functions:
;   core_skeleton.cpp_FUN_005487e0
;   core_xform.cpp_FUN_00584450
;   engine_2d.c_drawText_FUN_00401fe0
;   engine_special.cpp_FUN_005632a3
;
; *****************************************************************************

section .text

    MOV EDX,EDX                         ; 005498ce
        ;   Label: core_skeleton.cpp_FUN_005498ce
    PUSH EBX                            ; 005498d0
    PUSH ESI                            ; 005498d1
    PUSH EDI                            ; 005498d2
    PUSH EBP                            ; 005498d3
    SUB ESP,0x30                        ; 005498d4
    MOV EDX,dword ptr [ESP + 0x44]      ; 005498d7
    PUSH EDX                            ; 005498db
    CALL core_skeleton.cpp_FUN_005487e0 ; 005498dc
        ;   XREF to: 005487e0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_FUN_005487e0(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 005498e1
    MOV EBX,dword ptr [EAX + 0x1de78]   ; 005498e4
    XOR ECX,ECX                         ; 005498ea
    MOV dword ptr [ESP + 0x24],EAX      ; 005498ec
    MOV dword ptr [ESP + 0x28],ECX      ; 005498f0
    TEST EBX,EBX                        ; 005498f4
    JLE 0x005499a7                      ; 005498f6
        ;   XREF to: 005499a7 (CONDITIONAL_JUMP)  ; LAB_005499a7
    LEA EBP,[EAX + 0x1de7c]             ; 005498fc
    MOV EAX,dword ptr [ESP + 0x48]      ; 00549902
    MOV dword ptr [ESP + 0x2c],EAX      ; 00549906
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0054990a
        ;   Label: LAB_0054990a
    PUSH ECX                            ; 0054990e
    LEA ESI,[ESP + 0x1c]                ; 0054990f
    LEA EDI,[ESP + 0x10]                ; 00549913
    CALL core_xform.cpp_FUN_00584450    ; 00549917
        ;   XREF to: 00584450 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00584450()
    LEA ESI,[ESP + 0x1c]                ; 0054991c
    ADD ESP,0x4                         ; 00549920
    MOV EBX,ESP                         ; 00549923
    MOVSD ES:EDI,ESI                    ; 00549925
    MOVSD ES:EDI,ESI                    ; 00549926
    MOVSD ES:EDI,ESI                    ; 00549927
    LEA EAX,[ESP + 0xc]                 ; 00549928
    MOV ESI,dword ptr [0x005f2afc]      ; 0054992c | DAT_005f2afc
    FLD float ptr [EAX]                 ; 00549932
    FMUL float ptr [0x005e4758]         ; 00549934 | DAT_005e4758
    FISTP dword ptr [EBX]               ; 0054993a
    FLD float ptr [EAX + 0x4]           ; 0054993c
    FMUL float ptr [0x005e4758]         ; 0054993f | DAT_005e4758
    FISTP dword ptr [EBX + 0x4]         ; 00549945
    FLD float ptr [EAX + 0x8]           ; 00549948
    FMUL float ptr [0x005e4758]         ; 0054994b | DAT_005e4758
    FISTP dword ptr [EBX + 0x8]         ; 00549951
    MOV EAX,ESP                         ; 00549954
    PUSH EAX                            ; 00549956
    MOV EAX,dword ptr [ESI]             ; 00549957
    ADD EAX,0x124f50                    ; 00549959
    PUSH EAX                            ; 0054995e
    CALL engine_special.cpp_FUN_005632a3 ; 0054995f
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x005f2afc]                ; 00549964 | DAT_005f2afc
    MOV EAX,dword ptr [EAX]             ; 00549969
    ADD ESP,0x8                         ; 0054996b
    MOV DL,byte ptr [EAX + 0x124f63]    ; 0054996e
    ADD EAX,0x124f50                    ; 00549974
    TEST DL,0x80                        ; 00549979
    JZ 0x005499af                       ; 0054997c
        ;   XREF to: 005499af (CONDITIONAL_JUMP)  ; LAB_005499af
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0054997e
        ;   Label: LAB_0054997e
    MOV EDI,dword ptr [ESP + 0x28]      ; 00549982
    MOV EBX,dword ptr [ESP + 0x24]      ; 00549986
    ADD EBP,0x24                        ; 0054998a
    ADD ESI,0x30                        ; 0054998d
    INC EDI                             ; 00549990
    MOV EDX,dword ptr [EBX + 0x1de78]   ; 00549991
    MOV dword ptr [ESP + 0x2c],ESI      ; 00549997
    MOV dword ptr [ESP + 0x28],EDI      ; 0054999b
    CMP EDI,EDX                         ; 0054999f
    JL 0x0054990a                       ; 005499a1
        ;   XREF to: 0054990a (CONDITIONAL_JUMP)  ; LAB_0054990a
    ADD ESP,0x30                        ; 005499a7
        ;   Label: LAB_005499a7
    POP EBP                             ; 005499aa
    POP EDI                             ; 005499ab
    POP ESI                             ; 005499ac
    POP EBX                             ; 005499ad
    RET                                 ; 005499ae
    MOV EBX,dword ptr [EAX + 0x14]      ; 005499af
        ;   Label: LAB_005499af
    SAR EBX,0x10                        ; 005499b2
    MOV EAX,dword ptr [EAX + 0x10]      ; 005499b5
    PUSH EBX                            ; 005499b8
    SAR EAX,0x10                        ; 005499b9
    PUSH EAX                            ; 005499bc
    PUSH EBP                            ; 005499bd
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 005499be
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 005499c3
    JMP 0x0054997e                      ; 005499c6
        ;   XREF to: 0054997e (UNCONDITIONAL_JUMP)  ; LAB_0054997e

