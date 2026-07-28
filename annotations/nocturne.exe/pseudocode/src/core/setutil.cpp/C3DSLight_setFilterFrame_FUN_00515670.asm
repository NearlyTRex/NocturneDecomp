; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setutil_cpp_C3DSLight_setFilterFrame_FUN_00515670(C3DSLight *this_ptr,int frame_index,CDemonLight *light)
;
; Parameters:
; C3DSLight *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   frame_index
; CDemonLight *    Stack[0xc]:4   light
;
; XREF[1]:
;   core_event.cpp_CEventList_executeCommand_FUN_0047ac50 at 0047cb16
;
; Referenced Globals:
;   TerminatedCString s_core_setutil_cpp_00590ef5
;   TerminatedCString s_C3DSLight_advanceFilter_00590f09
;   TerminatedCString s_core_setutil_cpp_00590f3e
;   TerminatedCString s_C3DSLight_setFilterFrame_00590f52
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_dlight.cpp_CDemonLight_applyFilter_FUN_004501c0
;   core_main.c_FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00515670
        ;   Label: core_setutil.cpp_C3DSLight_setFilterFrame_FUN_00515670
    PUSH ESI                            ; 00515671
    PUSH EDI                            ; 00515672
    PUSH EBP                            ; 00515673
    MOV EBX,dword ptr [ESP + 0x14]      ; 00515674
    MOV ESI,dword ptr [ESP + 0x18]      ; 00515678
    CMP dword ptr [ESP + 0x1c],0x0      ; 0051567c
    JZ 0x005156bb                       ; 00515681
        ;   XREF to: 005156bb (CONDITIONAL_JUMP)  ; LAB_005156bb
    TEST ESI,ESI                        ; 00515683
        ;   Label: LAB_00515683
    JL 0x005156e0                       ; 00515685
        ;   XREF to: 005156e0 (CONDITIONAL_JUMP)  ; LAB_005156e0
    CMP ESI,dword ptr [EBX + 0x11ec]    ; 00515687
    JGE 0x005156e0                      ; 0051568d
        ;   XREF to: 005156e0 (CONDITIONAL_JUMP)  ; LAB_005156e0
    PUSH 0x0                            ; 0051568f
        ;   Label: LAB_0051568f
    MOV dword ptr [EBX + 0x1890],ESI    ; 00515691
    PUSH 0x0                            ; 00515697
    MOV ECX,dword ptr [EBX + ESI*0x4 + 0x1774] ; 00515699
    PUSH ECX                            ; 005156a0
    MOV EDI,dword ptr [EBX + ESI*0x4 + 0x1810] ; 005156a1
    PUSH EDI                            ; 005156a8
    MOV EBP,dword ptr [ESP + 0x2c]      ; 005156a9
    PUSH EBP                            ; 005156ad
    CALL core_dlight.cpp_CDemonLight_applyFilter_FUN_004501c0 ; 005156ae
        ;   XREF to: 004501c0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_applyFilter_FUN_004501c0(CDemonLight * this_ptr, CDemonFilter * filter_ptr, int filter_index, int filter_pos_x, ...)
    ADD ESP,0x14                        ; 005156b3
    POP EBP                             ; 005156b6
    POP EDI                             ; 005156b7
    POP ESI                             ; 005156b8
    POP EBX                             ; 005156b9
    RET                                 ; 005156ba
    MOV ECX,0x590ef5                    ; 005156bb | = "..\\core\\setutil.cpp"
        ;   Label: LAB_005156bb
    MOV EDI,0x36c                       ; 005156c0
    PUSH 0x590f09                       ; 005156c5 | = "C3DSLight::advanceFilter - NULL CDemo..."
    MOV dword ptr [0x01cc4800],ECX      ; 005156ca | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 005156d0 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 005156d6
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 005156db
    JMP 0x00515683                      ; 005156de
        ;   XREF to: 00515683 (UNCONDITIONAL_JUMP)  ; LAB_00515683
    MOV EAX,0x590f3e                    ; 005156e0 | = "..\\core\\setutil.cpp"
        ;   Label: LAB_005156e0
    MOV EDX,0x370                       ; 005156e5
    PUSH 0x590f52                       ; 005156ea | = "C3DSLight::setFilterFrame - invalid f..."
    MOV [0x01cc4800],EAX                ; 005156ef | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 005156f4 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 005156fa
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 005156ff
    JMP 0x0051568f                      ; 00515702
        ;   XREF to: 0051568f (UNCONDITIONAL_JUMP)  ; LAB_0051568f

