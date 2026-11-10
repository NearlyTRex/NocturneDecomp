; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CCrater_process_FUN_00499930(CCrater *this_ptr)
;
; Parameters:
; CCrater *        Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_process_FUN_0049c430 at 0049c685
;
; Referenced Globals:
;   undefined4 DAT_005d55b2
;   undefined4 DAT_005d55ba
;   undefined4 DAT_00614d30
;   CGame* g_CGamePtr = 01cb6900
;   undefined4 g_CGameInstance.delta_time_float
;
; Called Functions:
;   core_fire.cpp_CFireEffect_createSmokeParticle_FUN_0049d230
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00499930
        ;   Label: core_fire.cpp_CCrater_process_FUN_00499930
    PUSH ESI                            ; 00499931
    PUSH EBP                            ; 00499932
    SUB ESP,0xc                         ; 00499933
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00499936
    CMP dword ptr [EBX],0x0             ; 0049993a
    JZ 0x004999c0                       ; 0049993d
        ;   XREF to: 004999c0 (CONDITIONAL_JUMP)  ; LAB_004999c0
    FLD float ptr [EBX + 0x8]           ; 00499943
    FLDZ                                ; 00499946
    FCOMPP                              ; 00499948
    FNSTSW AX                           ; 0049994a
    SAHF                                ; 0049994c
    JC 0x004999c7                       ; 0049994d
        ;   XREF to: 004999c7 (CONDITIONAL_JUMP)  ; LAB_004999c7
    MOV ESI,dword ptr [0x00616494]      ; 00499953 | g_CGamePtr
        ;   Label: LAB_00499953
    LEA EAX,[EBX + 0x18]                ; 00499959
    FLD float ptr [ESI + 0x284]         ; 0049995c | g_CGameInstance.delta_time_float
    FADD float ptr [EAX]                ; 00499962
    FSTP float ptr [EAX]                ; 00499964
    FLD float ptr [EBX + 0x18]          ; 00499966
    FCOMP double ptr [0x005d55b2]       ; 00499969 | DAT_005d55b2
    FNSTSW AX                           ; 0049996f
    SAHF                                ; 00499971
    JBE 0x004999c0                      ; 00499972
        ;   XREF to: 004999c0 (CONDITIONAL_JUMP)  ; LAB_004999c0
    FLD float ptr [EBX + 0x18]          ; 00499974
    MOV ESI,0x3f800000                  ; 00499977
    FADD float ptr [0x005d55ba]         ; 0049997c | DAT_005d55ba
    XOR ECX,ECX                         ; 00499982
    FSTP float ptr [EBX + 0x18]         ; 00499984
    MOV dword ptr [ESP],ECX             ; 00499987
    MOV dword ptr [ESP + 0x4],ESI       ; 0049998a
    LEA ESI,[EBX + 0x1c]                ; 0049998e
    MOV dword ptr [ESP + 0x8],ECX       ; 00499991
    MOV EBX,ESI                         ; 00499995
    ADD ESI,0x24                        ; 00499997
    PUSH 0xffff                         ; 0049999a
        ;   Label: LAB_0049999a
    LEA EAX,[ESP + 0x4]                 ; 0049999f
    PUSH EAX                            ; 004999a3
    PUSH 0x3f800000                     ; 004999a4
    PUSH EBX                            ; 004999a9
    MOV EBP,dword ptr [0x00614d30]      ; 004999aa | DAT_00614d30
    PUSH EBP                            ; 004999b0
    CALL core_fire.cpp_CFireEffect_createSmokeParticle_FUN_0049d230 ; 004999b1
        ;   XREF to: 0049d230 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSmokeParticle_FUN_0049d230(CFireEffect * this_ptr, CVector3f * position, float drag_factor, CVector3f * wind_influence, ...)
    ADD EBX,0xc                         ; 004999b6
    ADD ESP,0x14                        ; 004999b9
    CMP EBX,ESI                         ; 004999bc
    JNZ 0x0049999a                      ; 004999be
        ;   XREF to: 0049999a (CONDITIONAL_JUMP)  ; LAB_0049999a
    ADD ESP,0xc                         ; 004999c0
        ;   Label: LAB_004999c0
    POP EBP                             ; 004999c3
    POP ESI                             ; 004999c4
    POP EBX                             ; 004999c5
    RET                                 ; 004999c6
    MOV ESI,dword ptr [0x00616494]      ; 004999c7 | g_CGamePtr
        ;   Label: LAB_004999c7
    LEA EAX,[EBX + 0x8]                 ; 004999cd
    FLD float ptr [ESI + 0x284]         ; 004999d0 | g_CGameInstance.delta_time_float
    FSUBR float ptr [EAX]               ; 004999d6
    FSTP float ptr [EAX]                ; 004999d8
    FLD float ptr [EBX + 0x8]           ; 004999da
    FLDZ                                ; 004999dd
    FCOMPP                              ; 004999df
    FNSTSW AX                           ; 004999e1
    SAHF                                ; 004999e3
    JBE 0x00499953                      ; 004999e4
        ;   XREF to: 00499953 (CONDITIONAL_JUMP)  ; LAB_00499953
    MOV dword ptr [EBX + 0x4],0x1       ; 004999ea
    MOV dword ptr [EBX + 0x8],0x0       ; 004999f1
    JMP 0x00499953                      ; 004999f8
        ;   XREF to: 00499953 (UNCONDITIONAL_JUMP)  ; LAB_00499953

