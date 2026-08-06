; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double __cdecl sound_sndmain_cpp_CSampleInfo_getSampleDuration_FUN_00525bc0(CSampleInfo *this_ptr)
;
; Parameters:
; CSampleInfo *    Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x10]:8  local_10
;
; XREF[1]:
;   core_sound.cpp_CSound_FUN_0052ebc0 at 0052ec3f
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00525bc0
        ;   Label: sound_sndmain.cpp_CSampleInfo_getSampleDuration_FUN_00525bc0
    MOV EBP,ESP                         ; 00525bc1
    SUB ESP,0x8                         ; 00525bc3
    AND ESP,0xfffffff8                  ; 00525bc6
    MOV EAX,dword ptr [EBP + 0x8]       ; 00525bc9
    CMP dword ptr [EAX + 0x10c],0x0     ; 00525bcc
    JLE 0x00525bf1                      ; 00525bd3
        ;   XREF to: 00525bf1 (CONDITIONAL_JUMP)  ; LAB_00525bf1
    FILD dword ptr [EAX + 0x110]        ; 00525bd5
    FILD dword ptr [EAX + 0x10c]        ; 00525bdb
    FDIVP                               ; 00525be1
    FSTP double ptr [ESP]               ; 00525be3
    MOV EAX,dword ptr [ESP]             ; 00525be6
    MOV EDX,dword ptr [ESP + 0x4]       ; 00525be9
    MOV ESP,EBP                         ; 00525bed
    POP EBP                             ; 00525bef
    RET                                 ; 00525bf0
    XOR ECX,ECX                         ; 00525bf1
        ;   Label: LAB_00525bf1
    MOV dword ptr [ESP],ECX             ; 00525bf3
    MOV dword ptr [ESP + 0x4],ECX       ; 00525bf6
    MOV EAX,dword ptr [ESP]             ; 00525bfa
    MOV EDX,dword ptr [ESP + 0x4]       ; 00525bfd
    MOV ESP,EBP                         ; 00525c01
    POP EBP                             ; 00525c03
    RET                                 ; 00525c04

