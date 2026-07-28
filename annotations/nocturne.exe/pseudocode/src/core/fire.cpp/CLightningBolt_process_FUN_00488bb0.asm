; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CLightningBolt_process_FUN_00488bb0(CLightningBolt *this_ptr)
;
; Parameters:
; CLightningBolt * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_process_FUN_0048a390 at 0048a5a3
;
; Referenced Globals:
;   undefined4 DAT_005b9354
;   undefined4 DAT_01c77850
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00488bb0
        ;   Label: core_fire.cpp_CLightningBolt_process_FUN_00488bb0
    FLD float ptr [EDX + 0x14]          ; 00488bb4
    FLDZ                                ; 00488bb7
    FCOMPP                              ; 00488bb9
    FNSTSW AX                           ; 00488bbb
    SAHF                                ; 00488bbd
    JNC 0x00488bdf                      ; 00488bbe
        ;   XREF to: 00488bdf (CONDITIONAL_JUMP)  ; LAB_00488bdf
    MOV ECX,dword ptr [0x005b9354]      ; 00488bc0 | DAT_005b9354
    LEA EAX,[EDX + 0x14]                ; 00488bc6
    FLD float ptr [ECX + 0x264]         ; 00488bc9 | DAT_01c77850
    FSUBR float ptr [EAX]               ; 00488bcf
    FSTP float ptr [EAX]                ; 00488bd1
    FLD float ptr [EDX + 0x14]          ; 00488bd3
    FLDZ                                ; 00488bd6
    FCOMPP                              ; 00488bd8
    FNSTSW AX                           ; 00488bda
    SAHF                                ; 00488bdc
    JA 0x00488be0                       ; 00488bdd
        ;   XREF to: 00488be0 (CONDITIONAL_JUMP)  ; LAB_00488be0
    RET                                 ; 00488bdf
        ;   Label: LAB_00488bdf
    MOV dword ptr [EDX + 0x14],0x0      ; 00488be0
        ;   Label: LAB_00488be0
    RET                                 ; 00488be7

