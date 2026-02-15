; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_waypoint_cpp_CWayPoint_FUN_005ec640(CWayPoint *this_ptr)
;
; Parameters:
; CWayPoint *      Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_waypoint.cpp_CWayPoint_FUN_005ec4f0 at 005ec51e
;   core_waypoint.cpp_CWayPoint_addAdj_FUN_005ec700 at 005ec718
;   core_waypoint.cpp_CWayPoint_onActorDeleted_FUN_005ec610 at 005ec630
;
; Called Functions:
;   core_waypoint.cpp_CWayPoint_removeAdj_FUN_005ec7b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ec640
        ;   Label: core_waypoint.cpp_CWayPoint_FUN_005ec640
    PUSH ESI                            ; 005ec641
    PUSH EDI                            ; 005ec642
    PUSH EBP                            ; 005ec643
    MOV EDI,dword ptr [ESP + 0x14]      ; 005ec644
    MOV EBP,dword ptr [ESP + 0x18]      ; 005ec648
    MOV EDX,dword ptr [EDI + 0x370]     ; 005ec64c
    XOR EBX,EBX                         ; 005ec652
    TEST EDX,EDX                        ; 005ec654
    JLE 0x005ec66e                      ; 005ec656
        ;   XREF to: 005ec66e (CONDITIONAL_JUMP)  ; LAB_005ec66e
    MOV ESI,EDI                         ; 005ec658
    CMP EBP,dword ptr [ESI + 0x374]     ; 005ec65a
        ;   Label: LAB_005ec65a
    JZ 0x005ec673                       ; 005ec660
        ;   XREF to: 005ec673 (CONDITIONAL_JUMP)  ; LAB_005ec673
    INC EBX                             ; 005ec662
    ADD ESI,0x8                         ; 005ec663
    CMP EBX,dword ptr [EDI + 0x370]     ; 005ec666
    JL 0x005ec65a                       ; 005ec66c
        ;   XREF to: 005ec65a (CONDITIONAL_JUMP)  ; LAB_005ec65a
    POP EBP                             ; 005ec66e
        ;   Label: LAB_005ec66e
    POP EDI                             ; 005ec66f
    POP ESI                             ; 005ec670
    POP EBX                             ; 005ec671
    RET                                 ; 005ec672
    PUSH EBX                            ; 005ec673
        ;   Label: LAB_005ec673
    PUSH EDI                            ; 005ec674
    CALL core_waypoint.cpp_CWayPoint_removeAdj_FUN_005ec7b0 ; 005ec675
        ;   XREF to: 005ec7b0 (UNCONDITIONAL_CALL)  ; void core_waypoint.cpp_CWayPoint_removeAdj_FUN_005ec7b0(CWayPoint * this_ptr, int index)
    ADD ESP,0x8                         ; 005ec67a
    CMP EBX,dword ptr [EDI + 0x370]     ; 005ec67d
    JL 0x005ec65a                       ; 005ec683
        ;   XREF to: 005ec65a (CONDITIONAL_JUMP)  ; LAB_005ec65a
    POP EBP                             ; 005ec685
    POP EDI                             ; 005ec686
    POP ESI                             ; 005ec687
    POP EBX                             ; 005ec688
    RET                                 ; 005ec689

