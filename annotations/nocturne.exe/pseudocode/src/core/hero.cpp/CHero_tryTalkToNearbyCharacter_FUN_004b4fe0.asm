; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004b4fe0(CHero *this_ptr)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined        Stack[-0x44]:1  local_44
; undefined        Stack[-0x38]:1  local_38
; undefined        Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[6]:
;   core_colonel.cpp_FUN_00439f50 at 0043a337
;   core_gabriela.cpp_FUN_00495a20 at 00496b96
;   core_haystack.cpp_FUN_004b32d0 at 004b3704
;   core_icepick.cpp_FUN_004b9fe0 at 004ba527
;   core_stranger.cpp_FUN_0053fc60 at 0053fe35
;   core_svetlana.cpp_FUN_00541d00 at 0054220f
;
; Referenced Globals:
;   double DOUBLE_0058582b = 4
;   double DOUBLE_00585833 = 5
;   double DOUBLE_0058583b = 0.349065850388889
;   undefined4 DAT_005b7650
;   undefined4 DAT_005be368
;   undefined4 DAT_01fa5f34
;
; Called Functions:
;   core_actor.cpp_CDemonActor_inverseTransformVector_FUN_0040a220
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_event.cpp_CEventList_executeCommands_FUN_0047ab70
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b4fe0
        ;   Label: core_hero.cpp_CHero_tryTalkToNearbyCharacter_FUN_004b4fe0
    PUSH ESI                            ; 004b4fe1
    PUSH EDI                            ; 004b4fe2
    PUSH EBP                            ; 004b4fe3
    MOV EBP,ESP                         ; 004b4fe4
    SUB ESP,0x40                        ; 004b4fe6
    AND ESP,0xfffffff8                  ; 004b4fe9
    MOV EBX,0x3fc00000                  ; 004b4fec
    MOV EAX,ESP                         ; 004b4ff1
    MOV ESI,dword ptr [EBP + 0x14]      ; 004b4ff3
    PUSH EAX                            ; 004b4ff6
    LEA EAX,[ESP + 0x1c]                ; 004b4ff7
    XOR EDX,EDX                         ; 004b4ffb
    PUSH EAX                            ; 004b4ffd
    XOR EDI,EDI                         ; 004b4ffe
    MOV dword ptr [ESP + 0x8],EDX       ; 004b5000
    PUSH ESI                            ; 004b5004
    MOV dword ptr [ESP + 0x10],EDX      ; 004b5005
    MOV dword ptr [ESP + 0x14],EBX      ; 004b5009
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 004b500d
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004b5012
    ADD ESI,0x20                        ; 004b5015
    MOV dword ptr [ESP + 0x3c],EDI      ; 004b5018
    MOV EAX,[0x005be368]                ; 004b501c | DAT_005be368
        ;   Label: LAB_004b501c
    CMP EDI,dword ptr [EAX + 0x14ecb0]  ; 004b5021 | DAT_01fa5f34
    JGE 0x004b50fe                      ; 004b5027
        ;   XREF to: 004b50fe (CONDITIONAL_JUMP)  ; LAB_004b50fe
    ADD EAX,dword ptr [ESP + 0x3c]      ; 004b502d
    MOV EBX,dword ptr [EAX + 0x14ecb4]  ; 004b5031
    CMP byte ptr [EBX + 0x252c],0x0     ; 004b5037
    JZ 0x004b5045                       ; 004b503e
        ;   XREF to: 004b5045 (CONDITIONAL_JUMP)  ; LAB_004b5045
    CMP EBX,dword ptr [EBP + 0x14]      ; 004b5040
    JNZ 0x004b5053                      ; 004b5043
        ;   XREF to: 004b5053 (CONDITIONAL_JUMP)  ; LAB_004b5053
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004b5045
        ;   Label: LAB_004b5045
    ADD EAX,0x4                         ; 004b5049
    INC EDI                             ; 004b504c
    MOV dword ptr [ESP + 0x3c],EAX      ; 004b504d
    JMP 0x004b501c                      ; 004b5051
        ;   XREF to: 004b501c (UNCONDITIONAL_JUMP)  ; LAB_004b501c
    LEA EAX,[EBX + 0x20]                ; 004b5053
        ;   Label: LAB_004b5053
    FLD float ptr [EAX]                 ; 004b5056
    FSUB float ptr [ESI]                ; 004b5058
    FSTP float ptr [ESP + 0x30]         ; 004b505a
    FLD float ptr [EAX + 0x4]           ; 004b505e
    FSUB float ptr [ESI + 0x4]          ; 004b5061
    FST float ptr [ESP + 0x34]          ; 004b5064
    FLD float ptr [EAX + 0x8]           ; 004b5068
    FXCH                                ; 004b506b
    FABS                                ; 004b506d
    FXCH                                ; 004b506f
    FSUB float ptr [ESI + 0x8]          ; 004b5071
    FSTP float ptr [ESP + 0x38]         ; 004b5074
    FCOMP double ptr [0x0058582b]       ; 004b5078 | DOUBLE_0058582b
    FNSTSW AX                           ; 004b507e
    SAHF                                ; 004b5080
    JA 0x004b5045                       ; 004b5081
        ;   XREF to: 004b5045 (CONDITIONAL_JUMP)  ; LAB_004b5045
    FLD float ptr [ESP + 0x30]          ; 004b5083
    FMUL ST0                            ; 004b5087
    FLD float ptr [ESP + 0x38]          ; 004b5089
    FMUL ST0                            ; 004b508d
    FADDP                               ; 004b508f
    FSQRT                               ; 004b5091
    XOR EDX,EDX                         ; 004b5093
    MOV dword ptr [ESP + 0x34],EDX      ; 004b5095
    FCOMP double ptr [0x00585833]       ; 004b5099 | DOUBLE_00585833
    FNSTSW AX                           ; 004b509f
    SAHF                                ; 004b50a1
    JA 0x004b5045                       ; 004b50a2
        ;   XREF to: 004b5045 (CONDITIONAL_JUMP)  ; LAB_004b5045
    LEA EAX,[ESP + 0x30]                ; 004b50a4
    PUSH EAX                            ; 004b50a8
    LEA EAX,[ESP + 0x28]                ; 004b50a9
    PUSH EAX                            ; 004b50ad
    MOV ECX,dword ptr [EBP + 0x14]      ; 004b50ae
    PUSH ECX                            ; 004b50b1
    CALL core_actor.cpp_CDemonActor_inverseTransformVector_FUN_0040a220 ; 004b50b2
        ;   XREF to: 0040a220 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_inverseTransformVector_FUN_0040a220()
    ADD ESP,0xc                         ; 004b50b7
    PUSH EAX                            ; 004b50ba
    LEA EAX,[ESP + 0x10]                ; 004b50bb
    PUSH EAX                            ; 004b50bf
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 004b50c0
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0()
    FLD float ptr [EAX + 0x4]           ; 004b50c5
    FABS                                ; 004b50c8
    ADD ESP,0x8                         ; 004b50ca
    FCOMP double ptr [0x0058583b]       ; 004b50cd | DOUBLE_0058583b
    FNSTSW AX                           ; 004b50d3
    SAHF                                ; 004b50d5
    JA 0x004b5045                       ; 004b50d6
        ;   XREF to: 004b5045 (CONDITIONAL_JUMP)  ; LAB_004b5045
    ADD EBX,0x252c                      ; 004b50dc
    PUSH EBX                            ; 004b50e2
    MOV EBX,dword ptr [0x005b7650]      ; 004b50e3 | DAT_005b7650
    PUSH EBX                            ; 004b50e9
    CALL core_event.cpp_CEventList_executeCommands_FUN_0047ab70 ; 004b50ea
        ;   XREF to: 0047ab70 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_0047ab70(CEventList * this_ptr, char * commands)
    MOV EAX,0x1                         ; 004b50ef
    ADD ESP,0x8                         ; 004b50f4
    MOV ESP,EBP                         ; 004b50f7
    POP EBP                             ; 004b50f9
    POP EDI                             ; 004b50fa
    POP ESI                             ; 004b50fb
    POP EBX                             ; 004b50fc
    RET                                 ; 004b50fd
    XOR EAX,EAX                         ; 004b50fe
        ;   Label: LAB_004b50fe
    MOV ESP,EBP                         ; 004b5100
    POP EBP                             ; 004b5102
    POP EDI                             ; 004b5103
    POP ESI                             ; 004b5104
    POP EBX                             ; 004b5105
    RET                                 ; 004b5106

