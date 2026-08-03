; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_CBloodPool_processAge_FUN_004af700(CBloodPool *this_ptr)
;
; Parameters:
; CBloodPool *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_gore.cpp_CGore_process_FUN_004b0030 at 004b00af
;
; Referenced Globals:
;   double DOUBLE_00585130 = 3.625
;   CGame* g_CGame_PTR_005b9354 = 01c775ec
;   undefined4 g_CGame_01c775ec.delta_time_float
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 004af700
        ;   Label: core_gore.cpp_CBloodPool_processAge_FUN_004af700
    MOV EDX,dword ptr [0x005b9354]      ; 004af704 | g_CGame_PTR_005b9354
    LEA EAX,[ECX + 0x18]                ; 004af70a
    FLD float ptr [EDX + 0x264]         ; 004af70d | g_CGame_01c775ec.delta_time_float
    FADD float ptr [EAX]                ; 004af713
    FSTP float ptr [EAX]                ; 004af715
    FLD float ptr [ECX + 0x18]          ; 004af717
    FCOMP double ptr [0x00585130]       ; 004af71a | DOUBLE_00585130
    FNSTSW AX                           ; 004af720
    SAHF                                ; 004af722
    JA 0x004af726                       ; 004af723
        ;   XREF to: 004af726 (CONDITIONAL_JUMP)  ; LAB_004af726
    RET                                 ; 004af725
    MOV dword ptr [ECX + 0x18],0x40680000 ; 004af726
        ;   Label: LAB_004af726
    RET                                 ; 004af72d

