; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_0043d150(int param_1,undefined4 *param_2)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043d150
        ;   Label: FUN_0043d150
    SUB ESP,0x18                        ; 0043d151
    MOV EBX,dword ptr [ESP + 0x24]      ; 0043d154
    MOV EAX,dword ptr [ESP + 0x20]      ; 0043d158
    ADD EAX,0x150                       ; 0043d15c
    PUSH EAX                            ; 0043d161
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 0043d162
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530()
    LEA EDX,[EAX + 0x338]               ; 0043d167
    ADD ESP,0x4                         ; 0043d16d
    MOV EAX,dword ptr [EDX]             ; 0043d170
    MOV dword ptr [ESP],EAX             ; 0043d172
    LEA EAX,[EDX + 0x4]                 ; 0043d175
    MOV EAX,dword ptr [EAX]             ; 0043d178
    MOV dword ptr [ESP + 0x4],EAX       ; 0043d17a
    LEA EAX,[EDX + 0x8]                 ; 0043d17e
    MOV EAX,dword ptr [EAX]             ; 0043d181
    MOV dword ptr [ESP + 0x8],EAX       ; 0043d183
    MOV EAX,dword ptr [EDX + 0xc]       ; 0043d187
    ADD EDX,0xc                         ; 0043d18a
    MOV dword ptr [ESP + 0xc],EAX       ; 0043d18d
    LEA EAX,[EDX + 0x4]                 ; 0043d191
    MOV EAX,dword ptr [EAX]             ; 0043d194
    MOV dword ptr [ESP + 0x10],EAX      ; 0043d196
    LEA EAX,[EDX + 0x8]                 ; 0043d19a
    MOV EAX,dword ptr [EAX]             ; 0043d19d
    MOV dword ptr [ESP + 0x14],EAX      ; 0043d19f
    MOV dword ptr [EBX],0x0             ; 0043d1a3
    MOV EAX,dword ptr [ESP + 0x10]      ; 0043d1a9
    MOV dword ptr [EBX + 0x4],EAX       ; 0043d1ad
    MOV EAX,dword ptr [ESP + 0x14]      ; 0043d1b0
    MOV dword ptr [EBX + 0x8],EAX       ; 0043d1b4
    MOV EAX,EBX                         ; 0043d1b7
    ADD ESP,0x18                        ; 0043d1b9
    POP EBX                             ; 0043d1bc
    RET                                 ; 0043d1bd

