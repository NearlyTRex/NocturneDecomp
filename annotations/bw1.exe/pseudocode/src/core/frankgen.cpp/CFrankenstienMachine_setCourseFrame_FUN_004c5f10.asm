; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_frankgen_cpp_CFrankenstienMachine_setCourseFrame_FUN_004c5f10(CFrankenstienMachine *this_ptr,float start_frame,float end_frame)
;
; Parameters:
; CFrankenstienMachine * Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   start_frame
; float            Stack[0xc]:4   end_frame
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_frankgen.cpp_CFrankenstienMachine_updateAnchorPosition_FUN_004c5c60 at 004c5c8a
;
; Referenced Globals:
;   TerminatedCString s_core_frankgen_cpp_005e0dad
;   TerminatedCString s_CFrankenstienMachine_set_005e0dc2
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_course.cpp_CCourse_evaluate_FUN_00447f00
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c5f10
        ;   Label: core_frankgen.cpp_CFrankenstienMachine_setCourseFrame_FUN_004c5f10
    PUSH ESI                            ; 004c5f11
    PUSH EDI                            ; 004c5f12
    PUSH EBP                            ; 004c5f13
    MOV EBP,ESP                         ; 004c5f14
    SUB ESP,0xc                         ; 004c5f16
    AND ESP,0xfffffff8                  ; 004c5f19
    MOV EBX,dword ptr [EBP + 0x14]      ; 004c5f1c
    LEA EAX,[EBX + 0x300]               ; 004c5f1f
    MOV EAX,dword ptr [EAX]             ; 004c5f25
    MOV ESI,EAX                         ; 004c5f27
    CMP EAX,0x1                         ; 004c5f29
    JL 0x004c5f9d                       ; 004c5f2c
        ;   XREF to: 004c5f9d (CONDITIONAL_JUMP)  ; LAB_004c5f9d
    FLD float ptr [EBP + 0x18]          ; 004c5f2e
        ;   Label: LAB_004c5f2e
    FLD float ptr [EBX + 0x15c]         ; 004c5f31
    FSUB ST0,ST1                        ; 004c5f37
    MOV dword ptr [ESP + 0x8],ESI       ; 004c5f39
    FILD dword ptr [ESP + 0x8]          ; 004c5f3d
    FMULP                               ; 004c5f41
    FLD float ptr [EBP + 0x1c]          ; 004c5f43
    FSUBRP ST2,ST0                      ; 004c5f46
    FDIVRP                              ; 004c5f48
    FST float ptr [ESP]                 ; 004c5f4a
    FLDZ                                ; 004c5f4d
    FCOMPP                              ; 004c5f4f
    FNSTSW AX                           ; 004c5f51
    SAHF                                ; 004c5f53
    JBE 0x004c5f5b                      ; 004c5f54
        ;   XREF to: 004c5f5b (CONDITIONAL_JUMP)  ; LAB_004c5f5b
    XOR EDI,EDI                         ; 004c5f56
    MOV dword ptr [ESP],EDI             ; 004c5f58
    DEC ESI                             ; 004c5f5b
        ;   Label: LAB_004c5f5b
    MOV dword ptr [ESP + 0x8],ESI       ; 004c5f5c
    FLD float ptr [ESP]                 ; 004c5f60
    FILD dword ptr [ESP + 0x8]          ; 004c5f63
    FSTP float ptr [ESP + 0x4]          ; 004c5f67
    FCOMP float ptr [ESP + 0x4]         ; 004c5f6b
    FNSTSW AX                           ; 004c5f6f
    SAHF                                ; 004c5f71
    JBE 0x004c5f7b                      ; 004c5f72
        ;   XREF to: 004c5f7b (CONDITIONAL_JUMP)  ; LAB_004c5f7b
    MOV EAX,dword ptr [ESP + 0x4]       ; 004c5f74
    MOV dword ptr [ESP],EAX             ; 004c5f78
    LEA EAX,[EBX + 0x30]                ; 004c5f7b
        ;   Label: LAB_004c5f7b
    PUSH EAX                            ; 004c5f7e
    LEA EAX,[EBX + 0x20]                ; 004c5f7f
    PUSH EAX                            ; 004c5f82
    ADD EBX,0x300                       ; 004c5f83
    PUSH dword ptr [ESP + 0x8]          ; 004c5f89
    PUSH EBX                            ; 004c5f8d
    CALL core_course.cpp_CCourse_evaluate_FUN_00447f00 ; 004c5f8e
        ;   XREF to: 00447f00 (UNCONDITIONAL_CALL)  ; void core_course.cpp_CCourse_evaluate_FUN_00447f00(CCourse * this_ptr, float time, CVector3f * out_pos, CVector3f * out_euler)
    ADD ESP,0x10                        ; 004c5f93
    MOV ESP,EBP                         ; 004c5f96
    POP EBP                             ; 004c5f98
    POP EDI                             ; 004c5f99
    POP ESI                             ; 004c5f9a
    POP EBX                             ; 004c5f9b
    RET                                 ; 004c5f9c
    MOV EDX,0x5e0dad                    ; 004c5f9d | = "..\\core\\frankgen.cpp"
        ;   Label: LAB_004c5f9d
    MOV ECX,0x1dc                       ; 004c5fa2
    PUSH 0x5e0dc2                       ; 004c5fa7 | = "CFrankenstienMachine::setCourseFrame ..."
    MOV dword ptr [0x01d1d400],EDX      ; 004c5fac | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 004c5fb2 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004c5fb8
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004c5fbd
    JMP 0x004c5f2e                      ; 004c5fc0
        ;   XREF to: 004c5f2e (UNCONDITIONAL_JUMP)  ; LAB_004c5f2e

