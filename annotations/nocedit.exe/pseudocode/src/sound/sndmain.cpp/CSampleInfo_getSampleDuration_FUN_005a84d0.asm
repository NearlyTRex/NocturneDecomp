; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double __cdecl sound_sndmain_cpp_CSampleInfo_getSampleDuration_FUN_005a84d0(CSampleInfo *this_ptr)
;
; Parameters:
; CSampleInfo *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_sound.cpp_CSound_getSoundDuration_FUN_005b3ba0 at 005b3c1f
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005a84d0
        ;   Label: sound_sndmain.cpp_CSampleInfo_getSampleDuration_FUN_005a84d0
    MOV EBP,ESP                         ; 005a84d1
    SUB ESP,0x8                         ; 005a84d3
    AND ESP,0xfffffff8                  ; 005a84d6
    MOV EAX,dword ptr [EBP + 0x8]       ; 005a84d9
    CMP dword ptr [EAX + 0x10c],0x0     ; 005a84dc
    JLE 0x005a8501                      ; 005a84e3
        ;   XREF to: 005a8501 (CONDITIONAL_JUMP)  ; LAB_005a8501
    FILD dword ptr [EAX + 0x110]        ; 005a84e5
    FILD dword ptr [EAX + 0x10c]        ; 005a84eb
    FDIVP                               ; 005a84f1
    FSTP double ptr [ESP]               ; 005a84f3
    MOV EAX,dword ptr [ESP]             ; 005a84f6
    MOV EDX,dword ptr [ESP + 0x4]       ; 005a84f9
    MOV ESP,EBP                         ; 005a84fd
    POP EBP                             ; 005a84ff
    RET                                 ; 005a8500
    XOR ECX,ECX                         ; 005a8501
        ;   Label: LAB_005a8501
    MOV dword ptr [ESP],ECX             ; 005a8503
    MOV dword ptr [ESP + 0x4],ECX       ; 005a8506
    MOV EAX,dword ptr [ESP]             ; 005a850a
    MOV EDX,dword ptr [ESP + 0x4]       ; 005a850d
    MOV ESP,EBP                         ; 005a8511
    POP EBP                             ; 005a8513
    RET                                 ; 005a8514

