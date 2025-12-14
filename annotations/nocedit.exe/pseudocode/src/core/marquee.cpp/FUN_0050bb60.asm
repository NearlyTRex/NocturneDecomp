; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CMarquee * core_marquee.cpp_FUN_0050bb60(CMarquee * this_ptr)
;
; Parameters:
; CMarquee *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_marquee.cpp_FUN_0050bb20 at 0050bb3a
;
; Referenced Globals:
;   TerminatedCString s_menu1_pth_006359b7
;   undefined4 s_enu1.pth_006359b8
;   undefined4 s_nu1.pth_006359b9
;   undefined4 s_u1.pth_006359ba
;   CDemonActor_vtable PTR_core_marquee.cpp_FUN_00661044
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
;   core_course.cpp_CCourse_ctor_FUN_004424c0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0050bb60
        ;   Label: core_marquee.cpp_FUN_0050bb60
    PUSH EDI                            ; 0050bb61
    MOV EDX,dword ptr [ESP + 0xc]       ; 0050bb62
    PUSH EDX                            ; 0050bb66
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0 ; 0050bb67
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004088b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0050bb6c
    ADD EAX,0x1a4                       ; 0050bb6f
    PUSH EAX                            ; 0050bb74
    CALL core_course.cpp_CCourse_ctor_FUN_004424c0 ; 0050bb75
        ;   XREF to: 004424c0 (UNCONDITIONAL_CALL)  ; CCourse * core_course.cpp_CCourse_ctor_FUN_004424c0(CCourse * this_ptr)
    LEA EDX,[EAX + 0xfffffe5c]          ; 0050bb7a
    MOV ESI,0x6359b7                    ; 0050bb80 | = "menu1.pth"
    ADD ESP,0x4                         ; 0050bb85
    MOV dword ptr [EDX + 0x154],0x661044 ; 0050bb88 | PTR_core_marquee.cpp_FUN_00661044
    LEA EDI,[EDX + 0x158]               ; 0050bb92
    MOV dword ptr [EDX + 0x178],0x41200000 ; 0050bb98
    PUSH EDI                            ; 0050bba2
    MOV AL,byte ptr [ESI]               ; 0050bba3 | = "menu1.pth" | s_nu1.pth_006359b9
        ;   Label: LAB_0050bba3
    MOV byte ptr [EDI],AL               ; 0050bba5
    CMP AL,0x0                          ; 0050bba7
    JZ 0x0050bbbb                       ; 0050bba9
        ;   XREF to: 0050bbbb (CONDITIONAL_JUMP)  ; LAB_0050bbbb
    MOV AL,byte ptr [ESI + 0x1]         ; 0050bbab | s_enu1.pth_006359b8 | s_u1.pth_006359ba
    ADD ESI,0x2                         ; 0050bbae
    MOV byte ptr [EDI + 0x1],AL         ; 0050bbb1
    ADD EDI,0x2                         ; 0050bbb4
    CMP AL,0x0                          ; 0050bbb7
    JNZ 0x0050bba3                      ; 0050bbb9
        ;   XREF to: 0050bba3 (CONDITIONAL_JUMP)  ; LAB_0050bba3
    POP EDI                             ; 0050bbbb
        ;   Label: LAB_0050bbbb
    MOV dword ptr [EDX + 0x17c],0x0     ; 0050bbbc
    MOV dword ptr [EDX + 0x180],0x3     ; 0050bbc6
    MOV dword ptr [EDX + 0x184],0x0     ; 0050bbd0
    MOV dword ptr [EDX + 0x188],0x0     ; 0050bbda
    MOV dword ptr [EDX + 0x18c],0x0     ; 0050bbe4
    MOV dword ptr [EDX + 0x190],0x0     ; 0050bbee
    MOV dword ptr [EDX + 0x194],0x0     ; 0050bbf8
    MOV dword ptr [EDX + 0x198],0x0     ; 0050bc02
    MOV dword ptr [EDX + 0xfc],0x1      ; 0050bc0c
    MOV EAX,EDX                         ; 0050bc16
    MOV dword ptr [EDX + 0x1a0],0x1     ; 0050bc18
    POP EDI                             ; 0050bc22
    POP ESI                             ; 0050bc23
    RET                                 ; 0050bc24

