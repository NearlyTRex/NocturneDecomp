; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_motion_cpp_FUN_00503810(int *param_1)
;
;
; XREF[1]:
;   core_charactr.cpp_FUN_00422c10 at 00422c1a
;
; Called Functions:
;   core_motion.cpp_FUN_005035c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00503810
        ;   Label: core_motion.cpp_FUN_00503810
    MOV EBX,dword ptr [ESP + 0x8]       ; 00503811
    CMP dword ptr [EBX],0x0             ; 00503815
    JZ 0x00503826                       ; 00503818
        ;   XREF to: 00503826 (CONDITIONAL_JUMP)  ; LAB_00503826
    CMP byte ptr [EBX + 0x30],0x0       ; 0050381a
    JZ 0x00503828                       ; 0050381e
        ;   XREF to: 00503828 (CONDITIONAL_JUMP)  ; LAB_00503828
    MOV dword ptr [EBX],0x0             ; 00503820
    POP EBX                             ; 00503826
        ;   Label: LAB_00503826
    RET                                 ; 00503827
    PUSH EDI                            ; 00503828
        ;   Label: LAB_00503828
    PUSH ESI                            ; 00503829
    PUSH EBX                            ; 0050382a
    CALL core_motion.cpp_FUN_005035c0   ; 0050382b
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    ADD ESP,0x4                         ; 00503830
    LEA EDI,[EBX + 0x30]                ; 00503833
    MOV ESI,EAX                         ; 00503836
    PUSH EDI                            ; 00503838
    MOV AL,byte ptr [ESI]               ; 00503839
        ;   Label: LAB_00503839
    MOV byte ptr [EDI],AL               ; 0050383b
    CMP AL,0x0                          ; 0050383d
    JZ 0x00503851                       ; 0050383f
        ;   XREF to: 00503851 (CONDITIONAL_JUMP)  ; LAB_00503851
    MOV AL,byte ptr [ESI + 0x1]         ; 00503841
    ADD ESI,0x2                         ; 00503844
    MOV byte ptr [EDI + 0x1],AL         ; 00503847
    ADD EDI,0x2                         ; 0050384a
    CMP AL,0x0                          ; 0050384d
    JNZ 0x00503839                      ; 0050384f
        ;   XREF to: 00503839 (CONDITIONAL_JUMP)  ; LAB_00503839
    POP EDI                             ; 00503851
        ;   Label: LAB_00503851
    POP ESI                             ; 00503852
    POP EDI                             ; 00503853
    MOV dword ptr [EBX],0x0             ; 00503854
    POP EBX                             ; 0050385a
    RET                                 ; 0050385b

