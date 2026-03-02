; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_design_c_initializeCram_FUN_0046b6e0(SCram *cram)
;
; Parameters:
; SCram *          Stack[0x4]:4   cram
;
; XREF[3]:
;   core_dmodel.cpp_CKeyFramedModel_packTexturesToAtlases_FUN_0047a3e0 at 0047a559
;   core_skeledit.cpp_CDeformableModel_cramModelTexture_FUN_0058de70 at 0058e01f
;   shape_design.c_setTextureQualityParameter_FUN_0046a8e0 at 0046a8fe
;
; Called Functions:
;   crt_memory.c_memset_FUN_005fde40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046b6e0
        ;   Label: shape_design.c_initializeCram_FUN_0046b6e0
    PUSH ESI                            ; 0046b6e1
    PUSH EDI                            ; 0046b6e2
    PUSH EBP                            ; 0046b6e3
    MOV EBP,ESP                         ; 0046b6e4
    SUB ESP,0x0                         ; 0046b6e6
    PUSH 0x74                           ; 0046b6ec
    PUSH 0x0                            ; 0046b6ee
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046b6f0
    PUSH EAX                            ; 0046b6f3
    CALL crt_memory.c_memset_FUN_005fde40 ; 0046b6f4
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0046b6f9
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046b6fc
    MOV byte ptr [EAX],0x0              ; 0046b6ff
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046b702
    MOV dword ptr [EAX + 0x50],0x0      ; 0046b705
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046b70c
    MOV dword ptr [EAX + 0x54],0x2      ; 0046b70f
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046b716
    MOV dword ptr [EAX + 0x58],0x5f     ; 0046b719
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046b720
    MOV dword ptr [EAX + 0x5c],0x1      ; 0046b723
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046b72a
    MOV dword ptr [EAX + 0x60],0x1      ; 0046b72d
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046b734
    MOV dword ptr [EAX + 0x64],0x1      ; 0046b737
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046b73e
    MOV dword ptr [EAX + 0x68],0x1      ; 0046b741
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046b748
    MOV dword ptr [EAX + 0x6c],0x1      ; 0046b74b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046b752
    MOV dword ptr [EAX + 0x70],0x0      ; 0046b755
    POP EBP                             ; 0046b75c
    POP EDI                             ; 0046b75d
    POP ESI                             ; 0046b75e
    POP EBX                             ; 0046b75f
    RET                                 ; 0046b760

