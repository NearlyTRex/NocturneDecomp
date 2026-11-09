; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_FUN_0049d8b0(CCrater *this_ptr)
;
; Parameters:
; CCrater *        Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_fire.cpp_FUN_004a1760 at 004a1995
;
; Referenced Globals:
;   undefined4 DAT_005c0778
;   undefined4 DAT_005c0780
;   undefined4 DAT_005fc5a0
;   CGame* g_CGamePtr = 01d2130c
;   undefined4 g_CGameInstance.field788_0x314
;
; Called Functions:
;   core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004a2560
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049d8b0
        ;   Label: core_fire.cpp_FUN_0049d8b0
    PUSH ESI                            ; 0049d8b1
    PUSH EBP                            ; 0049d8b2
    SUB ESP,0xc                         ; 0049d8b3
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0049d8b6
    CMP dword ptr [EBX],0x0             ; 0049d8ba
    JZ 0x0049d940                       ; 0049d8bd
        ;   XREF to: 0049d940 (CONDITIONAL_JUMP)  ; LAB_0049d940
    FLD float ptr [EBX + 0x8]           ; 0049d8c3
    FLDZ                                ; 0049d8c6
    FCOMPP                              ; 0049d8c8
    FNSTSW AX                           ; 0049d8ca
    SAHF                                ; 0049d8cc
    JC 0x0049d947                       ; 0049d8cd
        ;   XREF to: 0049d947 (CONDITIONAL_JUMP)  ; LAB_0049d947
    MOV ESI,dword ptr [0x005fe9dc]      ; 0049d8d3 | g_CGamePtr
        ;   Label: LAB_0049d8d3
    LEA EAX,[EBX + 0x18]                ; 0049d8d9
    FLD float ptr [ESI + 0x314]         ; 0049d8dc | g_CGameInstance.field788_0x314
    FADD float ptr [EAX]                ; 0049d8e2
    FSTP float ptr [EAX]                ; 0049d8e4
    FLD float ptr [EBX + 0x18]          ; 0049d8e6
    FCOMP double ptr [0x005c0778]       ; 0049d8e9 | DAT_005c0778
    FNSTSW AX                           ; 0049d8ef
    SAHF                                ; 0049d8f1
    JBE 0x0049d940                      ; 0049d8f2
        ;   XREF to: 0049d940 (CONDITIONAL_JUMP)  ; LAB_0049d940
    FLD float ptr [EBX + 0x18]          ; 0049d8f4
    MOV ESI,0x3f800000                  ; 0049d8f7
    FADD float ptr [0x005c0780]         ; 0049d8fc | DAT_005c0780
    XOR ECX,ECX                         ; 0049d902
    FSTP float ptr [EBX + 0x18]         ; 0049d904
    MOV dword ptr [ESP],ECX             ; 0049d907
    MOV dword ptr [ESP + 0x4],ESI       ; 0049d90a
    LEA ESI,[EBX + 0x1c]                ; 0049d90e
    MOV dword ptr [ESP + 0x8],ECX       ; 0049d911
    MOV EBX,ESI                         ; 0049d915
    ADD ESI,0x24                        ; 0049d917
    PUSH 0x4000                         ; 0049d91a
        ;   Label: LAB_0049d91a
    LEA EAX,[ESP + 0x4]                 ; 0049d91f
    PUSH EAX                            ; 0049d923
    PUSH 0x3f800000                     ; 0049d924
    PUSH EBX                            ; 0049d929
    MOV EBP,dword ptr [0x005fc5a0]      ; 0049d92a | DAT_005fc5a0
    PUSH EBP                            ; 0049d930
    CALL core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004a2560 ; 0049d931
        ;   XREF to: 004a2560 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004a2560(CFireEffect * this_ptr, CVector3f * position, float drag_factor, CVector3f * wind_influence, ...)
    ADD EBX,0xc                         ; 0049d936
    ADD ESP,0x14                        ; 0049d939
    CMP EBX,ESI                         ; 0049d93c
    JNZ 0x0049d91a                      ; 0049d93e
        ;   XREF to: 0049d91a (CONDITIONAL_JUMP)  ; LAB_0049d91a
    ADD ESP,0xc                         ; 0049d940
        ;   Label: LAB_0049d940
    POP EBP                             ; 0049d943
    POP ESI                             ; 0049d944
    POP EBX                             ; 0049d945
    RET                                 ; 0049d946
    MOV ESI,dword ptr [0x005fe9dc]      ; 0049d947 | g_CGamePtr
        ;   Label: LAB_0049d947
    LEA EAX,[EBX + 0x8]                 ; 0049d94d
    FLD float ptr [ESI + 0x314]         ; 0049d950 | g_CGameInstance.field788_0x314
    FSUBR float ptr [EAX]               ; 0049d956
    FSTP float ptr [EAX]                ; 0049d958
    FLD float ptr [EBX + 0x8]           ; 0049d95a
    FLDZ                                ; 0049d95d
    FCOMPP                              ; 0049d95f
    FNSTSW AX                           ; 0049d961
    SAHF                                ; 0049d963
    JBE 0x0049d8d3                      ; 0049d964
        ;   XREF to: 0049d8d3 (CONDITIONAL_JUMP)  ; LAB_0049d8d3
    MOV dword ptr [EBX + 0x4],0x1       ; 0049d96a
    MOV dword ptr [EBX + 0x8],0x0       ; 0049d971
    JMP 0x0049d8d3                      ; 0049d978
        ;   XREF to: 0049d8d3 (UNCONDITIONAL_JUMP)  ; LAB_0049d8d3

