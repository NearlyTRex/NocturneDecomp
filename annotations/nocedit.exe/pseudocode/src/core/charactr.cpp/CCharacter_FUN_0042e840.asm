; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl float __cdecl core_charactr_cpp_CCharacter_FUN_0042e840(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[11]:
;   core_scat.cpp_CScat_renderOpaque_FUN_00557df0 at 00557e4d
;   core_stranger.cpp_CStranger_FUN_005bfb60 at 005bffbd
;   core_stranger.cpp_CStranger_FUN_005c07b0 at 005c11a5
;   core_stranger.cpp_CStranger_FUN_005c1680 at 005c16b6
;   core_stranger.cpp_CStranger_FUN_005c1fe0 at 005c1fff
;   core_stranger.cpp_CStranger_FUN_005c2400 at 005c241f
;   core_stranger.cpp_CStranger_FUN_005c2850 at 005c2888
;   core_stranger.cpp_CStranger_FUN_005c5270 at 005c55d7
;   core_stranger.cpp_CStranger_FUN_005c5b90 at 005c5dc6
;   core_stranger.cpp_CStranger_FUN_005c5f10 at 005c600b
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042e840
        ;   Label: core_charactr.cpp_CCharacter_FUN_0042e840
    PUSH ESI                            ; 0042e841
    PUSH EBP                            ; 0042e842
    MOV EBP,ESP                         ; 0042e843
    SUB ESP,0xc                         ; 0042e845
    AND ESP,0xfffffff8                  ; 0042e848
    MOV EDX,dword ptr [EBP + 0x10]      ; 0042e84b
    MOV EAX,dword ptr [EDX + 0x2a8c]    ; 0042e84e
    XOR ECX,ECX                         ; 0042e854
    SHL EAX,0x3                         ; 0042e856
    MOV dword ptr [ESP],ECX             ; 0042e859
    MOV ECX,EAX                         ; 0042e85c
    SHL EAX,0x3                         ; 0042e85e
    SUB EAX,ECX                         ; 0042e861
    MOV EBX,dword ptr [EBP + 0x14]      ; 0042e863
    CMP EBX,dword ptr [EDX + EAX*0x1 + 0x2630] ; 0042e866
    JZ 0x0042e894                       ; 0042e86d
        ;   XREF to: 0042e894 (CONDITIONAL_JUMP)  ; LAB_0042e894
    MOV EAX,dword ptr [EDX + 0x2a8c]    ; 0042e86f
        ;   Label: LAB_0042e86f
    SHL EAX,0x3                         ; 0042e875
    MOV ECX,EAX                         ; 0042e878
    SHL EAX,0x3                         ; 0042e87a
    SUB EAX,ECX                         ; 0042e87d
    MOV ESI,dword ptr [EBP + 0x14]      ; 0042e87f
    CMP ESI,dword ptr [EDX + EAX*0x1 + 0x262c] ; 0042e882
    JZ 0x0042e89f                       ; 0042e889
        ;   XREF to: 0042e89f (CONDITIONAL_JUMP)  ; LAB_0042e89f
    MOV EAX,dword ptr [ESP]             ; 0042e88b
    MOV ESP,EBP                         ; 0042e88e
    POP EBP                             ; 0042e890
    POP ESI                             ; 0042e891
    POP EBX                             ; 0042e892
    RET                                 ; 0042e893
    MOV EAX,dword ptr [EDX + 0x2a90]    ; 0042e894
        ;   Label: LAB_0042e894
    MOV dword ptr [ESP],EAX             ; 0042e89a
    JMP 0x0042e86f                      ; 0042e89d
        ;   XREF to: 0042e86f (UNCONDITIONAL_JUMP)  ; LAB_0042e86f
    FLD float ptr [EDX + 0x2a90]        ; 0042e89f
        ;   Label: LAB_0042e89f
    FLD1                                ; 0042e8a5
    FSUBRP                              ; 0042e8a7
    FADD float ptr [ESP]                ; 0042e8a9
    FSTP float ptr [ESP]                ; 0042e8ac
    MOV EAX,dword ptr [ESP]             ; 0042e8af
    MOV ESP,EBP                         ; 0042e8b2
    POP EBP                             ; 0042e8b4
    POP ESI                             ; 0042e8b5
    POP EBX                             ; 0042e8b6
    RET                                 ; 0042e8b7

