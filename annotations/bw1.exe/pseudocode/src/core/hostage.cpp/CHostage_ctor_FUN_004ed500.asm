; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CHostage * __cdecl core_hostage_cpp_CHostage_ctor_FUN_004ed500(CHostage *this_ptr)
;
; Parameters:
; CHostage *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_hostage.cpp_factoryFuncHostage_FUN_004ed4d0 at 004ed4e3
;
; Called Functions:
;   core_npc.cpp_CNPC_ctor_FUN_00531670
;   core_skeleton.cpp_FUN_00569f50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ed500
        ;   Label: core_hostage.cpp_CHostage_ctor_FUN_004ed500
    PUSH ESI                            ; 004ed501
    PUSH EDI                            ; 004ed502
    MOV EDX,dword ptr [ESP + 0x10]      ; 004ed503
    PUSH EDX                            ; 004ed507
    CALL core_npc.cpp_CNPC_ctor_FUN_00531670 ; 004ed508
        ;   XREF to: 00531670 (UNCONDITIONAL_CALL)  ; CNPC * core_npc.cpp_CNPC_ctor_FUN_00531670(CNPC * this_ptr)
    ADD ESP,0x4                         ; 004ed50d
    PUSH 0x5e4c68                       ; 004ed510
    MOV EBX,EAX                         ; 004ed515
    LEA EDI,[EAX + 0x158]               ; 004ed517
    PUSH EDI                            ; 004ed51d
    MOV dword ptr [EAX + 0x154],0x602174 ; 004ed51e
    CALL core_skeleton.cpp_FUN_00569f50 ; 004ed528
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569f50()
    MOV dword ptr [EBX + 0x1fe64],0x0   ; 004ed52d
    MOV dword ptr [EBX + 0x1fe6c],0x0   ; 004ed537
    MOV ESI,0x5e4c74                    ; 004ed541
    MOV dword ptr [EBX + 0x1fe70],0x0   ; 004ed546
    ADD ESP,0x8                         ; 004ed550
    MOV dword ptr [EBX + 0x1fe74],0x0   ; 004ed553
    LEA EDI,[EBX + 0x1fabc]             ; 004ed55d
    MOV dword ptr [EBX + 0x1fab8],0x40a00000 ; 004ed563
    PUSH EDI                            ; 004ed56d
    MOV AL,byte ptr [ESI]               ; 004ed56e
        ;   Label: LAB_004ed56e
    MOV byte ptr [EDI],AL               ; 004ed570
    CMP AL,0x0                          ; 004ed572
    JZ 0x004ed586                       ; 004ed574
        ;   XREF to: 004ed586 (CONDITIONAL_JUMP)  ; LAB_004ed586
    MOV AL,byte ptr [ESI + 0x1]         ; 004ed576
    ADD ESI,0x2                         ; 004ed579
    MOV byte ptr [EDI + 0x1],AL         ; 004ed57c
    ADD EDI,0x2                         ; 004ed57f
    CMP AL,0x0                          ; 004ed582
    JNZ 0x004ed56e                      ; 004ed584
        ;   XREF to: 004ed56e (CONDITIONAL_JUMP)  ; LAB_004ed56e
    POP EDI                             ; 004ed586
        ;   Label: LAB_004ed586
    MOV dword ptr [EBX + 0x1fe78],0x0   ; 004ed587
    MOV dword ptr [EBX + 0x26fc],0x0    ; 004ed591
    MOV dword ptr [EBX + 0x1fe90],0x0   ; 004ed59b
    MOV dword ptr [EBX + 0x1fe94],0x0   ; 004ed5a5
    MOV byte ptr [EBX + 0x1fb20],0x0    ; 004ed5af
    MOV byte ptr [EBX + 0x1fb40],0x0    ; 004ed5b6
    MOV byte ptr [EBX + 0x1fba4],0x0    ; 004ed5bd
    MOV byte ptr [EBX + 0x1fc08],0x0    ; 004ed5c4
    MOV byte ptr [EBX + 0x1fc6c],0x0    ; 004ed5cb
    MOV byte ptr [EBX + 0x1fcd0],0x0    ; 004ed5d2
    MOV byte ptr [EBX + 0x1fd34],0x0    ; 004ed5d9
    MOV dword ptr [EBX + 0x1fe98],0x0   ; 004ed5e0
    MOV dword ptr [EBX + 0x1fe9c],0x0   ; 004ed5ea
    MOV dword ptr [EBX + 0x1fe8c],0x0   ; 004ed5f4
    MOV byte ptr [EBX + 0x2544],0x0     ; 004ed5fe
    MOV byte ptr [EBX + 0x1fd98],0x0    ; 004ed605
    MOV byte ptr [EBX + 0x1fdfc],0x0    ; 004ed60c
    MOV EAX,EBX                         ; 004ed613
    MOV dword ptr [EBX + 0x2540],0x1    ; 004ed615
    POP EDI                             ; 004ed61f
    POP ESI                             ; 004ed620
    POP EBX                             ; 004ed621
    RET                                 ; 004ed622

