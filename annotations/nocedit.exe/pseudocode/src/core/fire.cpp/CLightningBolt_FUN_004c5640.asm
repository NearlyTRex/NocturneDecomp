; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_fire.cpp_CLightningBolt_FUN_004c5640(CLightningBolt * this_ptr)
;
; Parameters:
; CLightningBolt * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_FUN_004c8f50 at 004c8f7b
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004c5640
        ;   Label: core_fire.cpp_CLightningBolt_FUN_004c5640
    MOV ECX,dword ptr [ESP + 0x8]       ; 004c5644
    LEA EAX,[EDX + 0x4]                 ; 004c5648
    CMP EAX,ECX                         ; 004c564b
    JNZ 0x004c566b                      ; 004c564d
        ;   XREF to: 004c566b (CONDITIONAL_JUMP)  ; LAB_004c566b
    MOV dword ptr [EDX + 0x14],0x3e800000 ; 004c564f
        ;   Label: LAB_004c564f
    MOV EAX,dword ptr [ESP + 0xc]       ; 004c5656
    MOV dword ptr [EDX],0x0             ; 004c565a
    MOV dword ptr [EDX + 0x10],EAX      ; 004c5660
    MOV EAX,dword ptr [ESP + 0x10]      ; 004c5663
    MOV dword ptr [EDX + 0x18],EAX      ; 004c5667
    RET                                 ; 004c566a
    PUSH EBX                            ; 004c566b
        ;   Label: LAB_004c566b
    MOV EBX,dword ptr [ECX]             ; 004c566c
    MOV dword ptr [EAX],EBX             ; 004c566e
    MOV EBX,dword ptr [ECX + 0x4]       ; 004c5670
    MOV dword ptr [EAX + 0x4],EBX       ; 004c5673
    MOV EBX,dword ptr [ECX + 0x8]       ; 004c5676
    MOV dword ptr [EAX + 0x8],EBX       ; 004c5679
    POP EBX                             ; 004c567c
    JMP 0x004c564f                      ; 004c567d
        ;   XREF to: 004c564f (UNCONDITIONAL_JUMP)  ; LAB_004c564f

