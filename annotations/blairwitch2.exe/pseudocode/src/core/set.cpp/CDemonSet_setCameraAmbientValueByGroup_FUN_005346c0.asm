; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_setCameraAmbientValueByGroup_FUN_005346c0(CDemonSet *this_ptr,int group_id,float value)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   group_id
; float            Stack[0xc]:4   value
;
; XREF[1]:
;   core_event.cpp_FUN_00489670 at 0048cd0d
;
; Called Functions:
;   core_set.cpp_CDemonSet_setCameraAmbientValue_FUN_00534640
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005346c0
        ;   Label: core_set.cpp_CDemonSet_setCameraAmbientValueByGroup_FUN_005346c0
    PUSH ESI                            ; 005346c1
    PUSH EDI                            ; 005346c2
    PUSH EBP                            ; 005346c3
    MOV EDI,dword ptr [ESP + 0x14]      ; 005346c4
    MOV EBP,dword ptr [ESP + 0x18]      ; 005346c8
    MOV EDX,dword ptr [EDI]             ; 005346cc
    XOR EBX,EBX                         ; 005346ce
    TEST EDX,EDX                        ; 005346d0
    JLE 0x005346eb                      ; 005346d2
        ;   XREF to: 005346eb (CONDITIONAL_JUMP)  ; LAB_005346eb
    MOV ESI,EDI                         ; 005346d4
    CMP EBP,dword ptr [ESI + 0x150]     ; 005346d6
        ;   Label: LAB_005346d6
    JZ 0x005346f0                       ; 005346dc
        ;   XREF to: 005346f0 (CONDITIONAL_JUMP)  ; LAB_005346f0
    INC EBX                             ; 005346de
        ;   Label: LAB_005346de
    MOV ECX,dword ptr [EDI]             ; 005346df
    ADD ESI,0x1a4                       ; 005346e1
    CMP EBX,ECX                         ; 005346e7
    JL 0x005346d6                       ; 005346e9
        ;   XREF to: 005346d6 (CONDITIONAL_JUMP)  ; LAB_005346d6
    POP EBP                             ; 005346eb
        ;   Label: LAB_005346eb
    POP EDI                             ; 005346ec
    POP ESI                             ; 005346ed
    POP EBX                             ; 005346ee
    RET                                 ; 005346ef
    PUSH dword ptr [ESP + 0x1c]         ; 005346f0
        ;   Label: LAB_005346f0
    PUSH EBX                            ; 005346f4
    PUSH EDI                            ; 005346f5
    CALL core_set.cpp_CDemonSet_setCameraAmbientValue_FUN_00534640 ; 005346f6
        ;   XREF to: 00534640 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setCameraAmbientValue_FUN_00534640(CDemonSet * this_ptr, int index, float value)
    ADD ESP,0xc                         ; 005346fb
    JMP 0x005346de                      ; 005346fe
        ;   XREF to: 005346de (UNCONDITIONAL_JUMP)  ; LAB_005346de

