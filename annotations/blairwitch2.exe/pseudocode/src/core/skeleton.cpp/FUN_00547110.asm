; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_FUN_00547110(CDeformableModelInstance *this_ptr,float scale_factor,int target_bone_index)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   scale_factor
; int              Stack[0xc]:4   target_bone_index
;
; XREF[1]:
;   core_charactr.cpp_FUN_00426730 at 004267f3
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
;   core_skeleton.cpp_FUN_00540fc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00547110
        ;   Label: core_skeleton.cpp_FUN_00547110
    PUSH ESI                            ; 00547111
    PUSH EDI                            ; 00547112
    PUSH EBP                            ; 00547113
    MOV ESI,dword ptr [ESP + 0x14]      ; 00547114
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00547118
    PUSH ESI                            ; 0054711c
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 ; 0054711d
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance * this_ptr)
    XOR EBX,EBX                         ; 00547122
    ADD ESP,0x4                         ; 00547124
    MOV EDX,dword ptr [EAX + 0x1d1f8]   ; 00547127
    MOV EDI,EAX                         ; 0054712d
    TEST EDX,EDX                        ; 0054712f
    JLE 0x00547160                      ; 00547131
        ;   XREF to: 00547160 (CONDITIONAL_JUMP)  ; LAB_00547160
    PUSH EBP                            ; 00547133
        ;   Label: LAB_00547133
    PUSH EBX                            ; 00547134
    PUSH EDI                            ; 00547135
    CALL core_skeleton.cpp_FUN_00540fc0 ; 00547136
        ;   XREF to: 00540fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00540fc0(CSkeleton * this_ptr, int start_bone_index, int target_bone_index)
    ADD ESP,0xc                         ; 0054713b
    TEST EAX,EAX                        ; 0054713e
    JL 0x00547152                       ; 00547140
        ;   XREF to: 00547152 (CONDITIONAL_JUMP)  ; LAB_00547152
    FLD float ptr [ESI + 0xcf0]         ; 00547142
    FMUL float ptr [ESP + 0x18]         ; 00547148
    FSTP float ptr [ESI + 0xcf0]        ; 0054714c
    INC EBX                             ; 00547152
        ;   Label: LAB_00547152
    MOV ECX,dword ptr [EDI + 0x1d1f8]   ; 00547153
    ADD ESI,0x4                         ; 00547159
    CMP EBX,ECX                         ; 0054715c
    JL 0x00547133                       ; 0054715e
        ;   XREF to: 00547133 (CONDITIONAL_JUMP)  ; LAB_00547133
    POP EBP                             ; 00547160
        ;   Label: LAB_00547160
    POP EDI                             ; 00547161
    POP ESI                             ; 00547162
    POP EBX                             ; 00547163
    RET                                 ; 00547164

