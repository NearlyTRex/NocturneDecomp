; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_frankgen_cpp_CFrankenstienMachine_setCourseFrame_FUN_004acf60(CFrankenstienMachine *this_ptr,float start_frame,float end_frame)
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
;   core_frankgen.cpp_FUN_004accb0 at 004accda
;
; Referenced Globals:
;   TerminatedCString s_core_frankgen_cpp_005d6d34
;   TerminatedCString s_CFrankenstienMachine_set_005d6d49
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_course.cpp_FUN_00438c40
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004acf60
        ;   Label: core_frankgen.cpp_CFrankenstienMachine_setCourseFrame_FUN_004acf60
    PUSH ESI                            ; 004acf61
    PUSH EDI                            ; 004acf62
    PUSH EBP                            ; 004acf63
    MOV EBP,ESP                         ; 004acf64
    SUB ESP,0xc                         ; 004acf66
    AND ESP,0xfffffff8                  ; 004acf69
    MOV EBX,dword ptr [EBP + 0x14]      ; 004acf6c
    LEA EAX,[EBX + 0x45c]               ; 004acf6f
    MOV EAX,dword ptr [EAX]             ; 004acf75
    MOV ESI,EAX                         ; 004acf77
    CMP EAX,0x1                         ; 004acf79
    JL 0x004acfed                       ; 004acf7c
        ;   XREF to: 004acfed (CONDITIONAL_JUMP)  ; LAB_004acfed
    FLD float ptr [EBP + 0x18]          ; 004acf7e
        ;   Label: LAB_004acf7e
    FLD float ptr [EBX + 0x2b8]         ; 004acf81
    FSUB ST0,ST1                        ; 004acf87
    MOV dword ptr [ESP + 0x8],ESI       ; 004acf89
    FILD dword ptr [ESP + 0x8]          ; 004acf8d
    FMULP                               ; 004acf91
    FLD float ptr [EBP + 0x1c]          ; 004acf93
    FSUBRP ST2,ST0                      ; 004acf96
    FDIVRP                              ; 004acf98
    FST float ptr [ESP]                 ; 004acf9a
    FLDZ                                ; 004acf9d
    FCOMPP                              ; 004acf9f
    FNSTSW AX                           ; 004acfa1
    SAHF                                ; 004acfa3
    JBE 0x004acfab                      ; 004acfa4
        ;   XREF to: 004acfab (CONDITIONAL_JUMP)  ; LAB_004acfab
    XOR EDI,EDI                         ; 004acfa6
    MOV dword ptr [ESP],EDI             ; 004acfa8
    DEC ESI                             ; 004acfab
        ;   Label: LAB_004acfab
    MOV dword ptr [ESP + 0x8],ESI       ; 004acfac
    FLD float ptr [ESP]                 ; 004acfb0
    FILD dword ptr [ESP + 0x8]          ; 004acfb3
    FSTP float ptr [ESP + 0x4]          ; 004acfb7
    FCOMP float ptr [ESP + 0x4]         ; 004acfbb
    FNSTSW AX                           ; 004acfbf
    SAHF                                ; 004acfc1
    JBE 0x004acfcb                      ; 004acfc2
        ;   XREF to: 004acfcb (CONDITIONAL_JUMP)  ; LAB_004acfcb
    MOV EAX,dword ptr [ESP + 0x4]       ; 004acfc4
    MOV dword ptr [ESP],EAX             ; 004acfc8
    LEA EAX,[EBX + 0x30]                ; 004acfcb
        ;   Label: LAB_004acfcb
    PUSH EAX                            ; 004acfce
    LEA EAX,[EBX + 0x20]                ; 004acfcf
    PUSH EAX                            ; 004acfd2
    ADD EBX,0x45c                       ; 004acfd3
    PUSH dword ptr [ESP + 0x8]          ; 004acfd9
    PUSH EBX                            ; 004acfdd
    CALL core_course.cpp_FUN_00438c40   ; 004acfde
        ;   XREF to: 00438c40 (UNCONDITIONAL_CALL)  ; void core_course.cpp_FUN_00438c40(CCourse * this_ptr, float time, CVector3f * out_pos, CVector3f * out_euler)
    ADD ESP,0x10                        ; 004acfe3
    MOV ESP,EBP                         ; 004acfe6
    POP EBP                             ; 004acfe8
    POP EDI                             ; 004acfe9
    POP ESI                             ; 004acfea
    POP EBX                             ; 004acfeb
    RET                                 ; 004acfec
    MOV EDX,0x5d6d34                    ; 004acfed | = "..\\core\\frankgen.cpp"
        ;   Label: LAB_004acfed
    MOV ECX,0x1dc                       ; 004acff2
    PUSH 0x5d6d49                       ; 004acff7 | = "CFrankenstienMachine::setCourseFrame ..."
    MOV dword ptr [0x01d046a0],EDX      ; 004acffc | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 004ad002 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004ad008
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004ad00d
    JMP 0x004acf7e                      ; 004ad010
        ;   XREF to: 004acf7e (UNCONDITIONAL_JUMP)  ; LAB_004acf7e

