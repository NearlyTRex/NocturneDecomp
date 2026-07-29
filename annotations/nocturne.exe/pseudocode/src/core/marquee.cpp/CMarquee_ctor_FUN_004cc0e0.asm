; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMarquee * __cdecl core_marquee_cpp_CMarquee_ctor_FUN_004cc0e0(CMarquee *this_ptr)
;
; Parameters:
; CMarquee *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_marquee.cpp_FUN_004cc0b0 at 004cc0c3
;
; Referenced Globals:
;   TerminatedCString s_menu1_pth_00588193
;   undefined4 s_menu1_pth_00588193+1
;   undefined4 s_menu1_pth_00588193+2
;   undefined4 s_menu1_pth_00588193+3
;   CDemonActor_vtable g_CMarqueeVTable
;
; Called Functions:
;   core_actor.cpp_FUN_00409d30
;   core_course.cpp_CCourse_ctor_FUN_0043b5d0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004cc0e0
        ;   Label: core_marquee.cpp_CMarquee_ctor_FUN_004cc0e0
    PUSH EDI                            ; 004cc0e1
    MOV EDX,dword ptr [ESP + 0xc]       ; 004cc0e2
    PUSH EDX                            ; 004cc0e6
    CALL core_actor.cpp_FUN_00409d30    ; 004cc0e7
        ;   XREF to: 00409d30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_FUN_00409d30(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004cc0ec
    ADD EAX,0x19c                       ; 004cc0ef
    PUSH EAX                            ; 004cc0f4
    CALL core_course.cpp_CCourse_ctor_FUN_0043b5d0 ; 004cc0f5
        ;   XREF to: 0043b5d0 (UNCONDITIONAL_CALL)  ; CCourse * core_course.cpp_CCourse_ctor_FUN_0043b5d0(CCourse * this_ptr)
    LEA EDX,[EAX + 0xfffffe64]          ; 004cc0fa
    MOV ESI,0x588193                    ; 004cc100 | = "menu1.pth"
    ADD ESP,0x4                         ; 004cc105
    MOV dword ptr [EDX + 0x14c],0x5a02d4 ; 004cc108 | g_CMarqueeVTable
    LEA EDI,[EDX + 0x150]               ; 004cc112
    MOV dword ptr [EDX + 0x170],0x41200000 ; 004cc118
    PUSH EDI                            ; 004cc122
    MOV AL,byte ptr [ESI]               ; 004cc123 | = "menu1.pth" | s_menu1_pth_00588193+2
        ;   Label: LAB_004cc123
    MOV byte ptr [EDI],AL               ; 004cc125
    CMP AL,0x0                          ; 004cc127
    JZ 0x004cc13b                       ; 004cc129
        ;   XREF to: 004cc13b (CONDITIONAL_JUMP)  ; LAB_004cc13b
    MOV AL,byte ptr [ESI + 0x1]         ; 004cc12b | s_menu1_pth_00588193+1 | s_menu1_pth_00588193+3
    ADD ESI,0x2                         ; 004cc12e
    MOV byte ptr [EDI + 0x1],AL         ; 004cc131
    ADD EDI,0x2                         ; 004cc134
    CMP AL,0x0                          ; 004cc137
    JNZ 0x004cc123                      ; 004cc139
        ;   XREF to: 004cc123 (CONDITIONAL_JUMP)  ; LAB_004cc123
    POP EDI                             ; 004cc13b
        ;   Label: LAB_004cc13b
    MOV dword ptr [EDX + 0x174],0x0     ; 004cc13c
    MOV dword ptr [EDX + 0x178],0x3     ; 004cc146
    MOV dword ptr [EDX + 0x17c],0x0     ; 004cc150
    MOV dword ptr [EDX + 0x180],0x0     ; 004cc15a
    MOV dword ptr [EDX + 0x184],0x0     ; 004cc164
    MOV dword ptr [EDX + 0x188],0x0     ; 004cc16e
    MOV dword ptr [EDX + 0x18c],0x0     ; 004cc178
    MOV dword ptr [EDX + 0x190],0x0     ; 004cc182
    MOV dword ptr [EDX + 0xfc],0x1      ; 004cc18c
    MOV EAX,EDX                         ; 004cc196
    MOV dword ptr [EDX + 0x198],0x1     ; 004cc198
    POP EDI                             ; 004cc1a2
    POP ESI                             ; 004cc1a3
    RET                                 ; 004cc1a4

