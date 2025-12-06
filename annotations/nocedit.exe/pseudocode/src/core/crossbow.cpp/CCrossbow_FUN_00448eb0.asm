; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_crossbow.cpp_CCrossbow_FUN_00448eb0(CCrossbow * this_ptr)
;
; Parameters:
; CCrossbow *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00448eb0
        ;   Label: core_crossbow.cpp_CCrossbow_FUN_00448eb0
    SUB ESP,0x18                        ; 00448eb1
    MOV EBX,dword ptr [ESP + 0x24]      ; 00448eb4
    MOV EAX,dword ptr [ESP + 0x20]      ; 00448eb8
    ADD EAX,0x158                       ; 00448ebc
    PUSH EAX                            ; 00448ec1
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 00448ec2 | CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)
    LEA EDX,[EAX + 0x5678]              ; 00448ec7
    ADD ESP,0x4                         ; 00448ecd
    MOV EAX,dword ptr [EDX]             ; 00448ed0
    MOV dword ptr [ESP],EAX             ; 00448ed2
    LEA EAX,[EDX + 0x4]                 ; 00448ed5
    MOV EAX,dword ptr [EAX]             ; 00448ed8
    MOV dword ptr [ESP + 0x4],EAX       ; 00448eda
    LEA EAX,[EDX + 0x8]                 ; 00448ede
    MOV EAX,dword ptr [EAX]             ; 00448ee1
    MOV dword ptr [ESP + 0x8],EAX       ; 00448ee3
    MOV EAX,dword ptr [EDX + 0xc]       ; 00448ee7
    ADD EDX,0xc                         ; 00448eea
    MOV dword ptr [ESP + 0xc],EAX       ; 00448eed
    LEA EAX,[EDX + 0x4]                 ; 00448ef1
    MOV EAX,dword ptr [EAX]             ; 00448ef4
    MOV dword ptr [ESP + 0x10],EAX      ; 00448ef6
    LEA EAX,[EDX + 0x8]                 ; 00448efa
    MOV EAX,dword ptr [EAX]             ; 00448efd
    MOV dword ptr [ESP + 0x14],EAX      ; 00448eff
    MOV dword ptr [EBX],0x0             ; 00448f03
    MOV EAX,dword ptr [ESP + 0x10]      ; 00448f09
    MOV dword ptr [EBX + 0x4],EAX       ; 00448f0d
    MOV EAX,dword ptr [ESP + 0x14]      ; 00448f10
    MOV dword ptr [EBX + 0x8],EAX       ; 00448f14
    MOV EAX,EBX                         ; 00448f17
    ADD ESP,0x18                        ; 00448f19
    POP EBX                             ; 00448f1c
    RET                                 ; 00448f1d

