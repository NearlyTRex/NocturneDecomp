; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_motion_cpp_CMotionController_startTransition_FUN_004e1770(int param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[2]:
;   core_motion.cpp_CMotionController_advance_FUN_004e11c0 at 004e1481
;   core_motion.cpp_CMotionController_findAndStartTransition_FUN_004e1500 at 004e15d8
;
; Referenced Globals:
;   undefined4 DAT_0058b319
;
; Called Functions:
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660
;   core_motion.cpp_CMotionController_jumpToMotion_FUN_004e1990
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e1770
        ;   Label: core_motion.cpp_CMotionController_startTransition_FUN_004e1770
    PUSH ESI                            ; 004e1771
    PUSH EDI                            ; 004e1772
    PUSH EBP                            ; 004e1773
    SUB ESP,0x8                         ; 004e1774
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004e1777
    MOV ESI,dword ptr [ESP + 0x20]      ; 004e177b
    MOV EAX,dword ptr [ESI + 0xc]       ; 004e177f
    MOV dword ptr [ESP],EAX             ; 004e1782
    FLD float ptr [ESP]                 ; 004e1785
    FCOMP float ptr [0x0058b319]        ; 004e1788 | DAT_0058b319
    FNSTSW AX                           ; 004e178e
    SAHF                                ; 004e1790
    JZ 0x004e17d7                       ; 004e1791
        ;   XREF to: 004e17d7 (CONDITIONAL_JUMP)  ; LAB_004e17d7
    FLD float ptr [ESI + 0x10]          ; 004e1793
        ;   Label: LAB_004e1793
    FLDZ                                ; 004e1796
    FCOMPP                              ; 004e1798
    FNSTSW AX                           ; 004e179a
    SAHF                                ; 004e179c
    JNC 0x004e17f9                      ; 004e179d
        ;   XREF to: 004e17f9 (CONDITIONAL_JUMP)  ; LAB_004e17f9
    MOV EAX,dword ptr [ESI + 0x8]       ; 004e179f
    MOV dword ptr [EBX + 0x18],EAX      ; 004e17a2
    MOV EAX,dword ptr [ESP]             ; 004e17a5
    MOV dword ptr [EBX + 0x1c],EAX      ; 004e17a8
    MOV EAX,dword ptr [ESI + 0x4]       ; 004e17ab
    MOV dword ptr [EBX + 0x14],0x3a83126f ; 004e17ae
    MOV dword ptr [EBX + 0xc],EAX       ; 004e17b5
    FLD float ptr [ESI + 0x10]          ; 004e17b8
    FLD1                                ; 004e17bb
    FDIVRP                              ; 004e17bd
    MOV dword ptr [EBX + 0x20],0x0      ; 004e17bf
    FSTP float ptr [EBX + 0x10]         ; 004e17c6
    MOV EAX,dword ptr [ESI + 0x14]      ; 004e17c9
    MOV dword ptr [EBX + 0x24],EAX      ; 004e17cc
    ADD ESP,0x8                         ; 004e17cf
        ;   Label: LAB_004e17cf
    POP EBP                             ; 004e17d2
    POP EDI                             ; 004e17d3
    POP ESI                             ; 004e17d4
    POP EBX                             ; 004e17d5
    RET                                 ; 004e17d6
    MOV EDX,dword ptr [ESI + 0x8]       ; 004e17d7
        ;   Label: LAB_004e17d7
    PUSH EDX                            ; 004e17da
    MOV ECX,dword ptr [EBX + 0x4]       ; 004e17db
    PUSH dword ptr [EBX + 0x8]          ; 004e17de
    PUSH ECX                            ; 004e17e1
    MOV EAX,dword ptr [EBX + 0x50]      ; 004e17e2
    PUSH EBX                            ; 004e17e5
    CALL dword ptr [EAX + 0x4]          ; 004e17e6
    ADD ESP,0x10                        ; 004e17e9
    MOV dword ptr [ESP + 0x4],EAX       ; 004e17ec
    FILD dword ptr [ESP + 0x4]          ; 004e17f0
    FSTP float ptr [ESP]                ; 004e17f4
    JMP 0x004e1793                      ; 004e17f7
        ;   XREF to: 004e1793 (UNCONDITIONAL_JUMP)  ; LAB_004e1793
    MOV EDI,dword ptr [ESI + 0x8]       ; 004e17f9
        ;   Label: LAB_004e17f9
    PUSH dword ptr [ESP]                ; 004e17fc
    PUSH EDI                            ; 004e17ff
    PUSH EBX                            ; 004e1800
    CALL core_motion.cpp_CMotionController_jumpToMotion_FUN_004e1990 ; 004e1801
        ;   XREF to: 004e1990 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_jumpToMotion_FUN_004e1990()
    MOV EBP,dword ptr [ESI + 0x14]      ; 004e1806
    ADD ESP,0xc                         ; 004e1809
    TEST EBP,EBP                        ; 004e180c
    JZ 0x004e17cf                       ; 004e180e
        ;   XREF to: 004e17cf (CONDITIONAL_JUMP)  ; LAB_004e17cf
    PUSH EBX                            ; 004e1810
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 004e1811
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004e1816
    ADD ESP,0x4                         ; 004e1819
    MOV dword ptr [EBX + 0x28],EAX      ; 004e181c
    ADD ESP,0x8                         ; 004e181f
    POP EBP                             ; 004e1822
    POP EDI                             ; 004e1823
    POP ESI                             ; 004e1824
    POP EBX                             ; 004e1825
    RET                                 ; 004e1826

