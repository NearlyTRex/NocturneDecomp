; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hero_cpp_CHero_stopNearbyInteraction_FUN_004b5920(int param_1)
;
;
; XREF[2]:
;   FUN_00535900 at 00536e08
;   FUN_0053e860 at 0053e894
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b5920
        ;   Label: core_hero.cpp_CHero_stopNearbyInteraction_FUN_004b5920
    MOV EBX,dword ptr [ESP + 0x8]       ; 004b5921
    MOV EDX,dword ptr [EBX + 0x1fa18]   ; 004b5925
    TEST EDX,EDX                        ; 004b592b
    JNZ 0x004b5931                      ; 004b592d
        ;   XREF to: 004b5931 (CONDITIONAL_JUMP)  ; LAB_004b5931
    POP EBX                             ; 004b592f
    RET                                 ; 004b5930
    PUSH EBX                            ; 004b5931
        ;   Label: LAB_004b5931
    MOV EAX,EDX                         ; 004b5932
    PUSH EAX                            ; 004b5934
    MOV EDX,dword ptr [EDX + 0x14c]     ; 004b5935
    CALL dword ptr [EDX + 0x9c]         ; 004b593b
    ADD ESP,0x8                         ; 004b5941
    MOV dword ptr [EBX + 0x1fa18],0x0   ; 004b5944
    POP EBX                             ; 004b594e
    RET                                 ; 004b594f

