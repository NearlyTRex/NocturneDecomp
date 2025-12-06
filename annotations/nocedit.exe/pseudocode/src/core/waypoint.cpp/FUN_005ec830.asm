; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_waypoint.cpp_FUN_005ec830()
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_waypoint.cpp_CWayPoint_addAdj_FUN_005ec700 at 005ec70e
;   core_waypoint.cpp_FUN_005ec4f0 at 005ec4fc
;
; Called Functions:
;   core_waypoint.cpp_CWayPoint_removeAdj_FUN_005ec7b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ec830
        ;   Label: core_waypoint.cpp_FUN_005ec830
    PUSH ESI                            ; 005ec831
    PUSH EDI                            ; 005ec832
    PUSH EBP                            ; 005ec833
    SUB ESP,0x8                         ; 005ec834
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005ec837
    XOR EDX,EDX                         ; 005ec83b
    MOV ECX,dword ptr [EBX + 0x370]     ; 005ec83d
    MOV dword ptr [ESP + 0x4],EDX       ; 005ec843
    TEST ECX,ECX                        ; 005ec847
    JLE 0x005ec875                      ; 005ec849 | LAB_005ec875
        ;   XREF to: 005ec875 (CONDITIONAL_JUMP)
    MOV EBP,EBX                         ; 005ec84b
    MOV EDI,dword ptr [EBP + 0x374]     ; 005ec84d
        ;   Label: LAB_005ec84d
    TEST EDI,EDI                        ; 005ec853
    JZ 0x005ec85b                       ; 005ec855 | LAB_005ec85b
        ;   XREF to: 005ec85b (CONDITIONAL_JUMP)
    CMP EBX,EDI                         ; 005ec857
    JNZ 0x005ec87d                      ; 005ec859 | LAB_005ec87d
        ;   XREF to: 005ec87d (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [ESP + 0x4]       ; 005ec85b
        ;   Label: LAB_005ec85b
    PUSH ECX                            ; 005ec85f
    PUSH EBX                            ; 005ec860
    CALL core_waypoint.cpp_CWayPoint_removeAdj_FUN_005ec7b0 ; 005ec861 | undefined core_waypoint.cpp_CWayPoint_removeAdj_FUN_005ec7b0()
        ;   XREF to: 005ec7b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005ec866
    MOV EAX,dword ptr [ESP + 0x4]       ; 005ec869
        ;   Label: LAB_005ec869
    CMP EAX,dword ptr [EBX + 0x370]     ; 005ec86d
    JL 0x005ec84d                       ; 005ec873 | LAB_005ec84d
        ;   XREF to: 005ec84d (CONDITIONAL_JUMP)
    ADD ESP,0x8                         ; 005ec875
        ;   Label: LAB_005ec875
    POP EBP                             ; 005ec878
    POP EDI                             ; 005ec879
    POP ESI                             ; 005ec87a
    POP EBX                             ; 005ec87b
    RET                                 ; 005ec87c
    MOV ESI,dword ptr [ESP + 0x4]       ; 005ec87d
        ;   Label: LAB_005ec87d
    MOV EDX,dword ptr [EBX + 0x370]     ; 005ec881
    INC ESI                             ; 005ec887
    CMP ESI,EDX                         ; 005ec888
    JGE 0x005ec8bb                      ; 005ec88a | LAB_005ec8bb
        ;   XREF to: 005ec8bb (CONDITIONAL_JUMP)
    LEA EDI,[ESI*0x8 + 0x0]             ; 005ec88c
    MOV dword ptr [ESP],EBP             ; 005ec893
    ADD EDI,EBX                         ; 005ec896
    MOV EDX,dword ptr [ESP]             ; 005ec898
        ;   Label: LAB_005ec898
    MOV EAX,dword ptr [EDI + 0x374]     ; 005ec89b
    CMP EAX,dword ptr [EDX + 0x374]     ; 005ec8a1
    JNZ 0x005ec8c9                      ; 005ec8a7 | LAB_005ec8c9
        ;   XREF to: 005ec8c9 (CONDITIONAL_JUMP)
    PUSH ESI                            ; 005ec8a9
    PUSH EBX                            ; 005ec8aa
    CALL core_waypoint.cpp_CWayPoint_removeAdj_FUN_005ec7b0 ; 005ec8ab | undefined core_waypoint.cpp_CWayPoint_removeAdj_FUN_005ec7b0()
        ;   XREF to: 005ec7b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005ec8b0
    CMP ESI,dword ptr [EBX + 0x370]     ; 005ec8b3
        ;   Label: LAB_005ec8b3
    JL 0x005ec898                       ; 005ec8b9 | LAB_005ec898
        ;   XREF to: 005ec898 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP + 0x4]       ; 005ec8bb
        ;   Label: LAB_005ec8bb
    INC EDX                             ; 005ec8bf
    ADD EBP,0x8                         ; 005ec8c0
    MOV dword ptr [ESP + 0x4],EDX       ; 005ec8c3
    JMP 0x005ec869                      ; 005ec8c7 | LAB_005ec869
        ;   XREF to: 005ec869 (UNCONDITIONAL_JUMP)
    INC ESI                             ; 005ec8c9
        ;   Label: LAB_005ec8c9
    ADD EDI,0x8                         ; 005ec8ca
    JMP 0x005ec8b3                      ; 005ec8cd | LAB_005ec8b3
        ;   XREF to: 005ec8b3 (UNCONDITIONAL_JUMP)

