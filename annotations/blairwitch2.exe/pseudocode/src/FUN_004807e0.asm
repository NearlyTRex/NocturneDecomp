; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004807e0(undefined4 param_1,char *param_2)
;
; Local Variables:
; undefined8       Stack[-0x38]:8  local_38
; undefined8       Stack[-0x30]:8  local_30
; undefined4       Stack[-0x28]:4  local_28
; undefined2       Stack[-0x24]:2  local_24
; undefined4       Stack[-0x22]:4  local_22
; undefined4       Stack[-0x1e]:4  local_1e
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[3]:
;   FUN_004b5190 at 004b5b2c
;   FUN_004b6170 at 004b6221
;   FUN_004e45e0 at 004e4680
;
; Referenced Globals:
;   void* switchdataD_004807c0 = 0048081c
;   undefined4 s_Blocks_d_Total_1fk_Max_1_005d24fa+1
;   TerminatedCString s_Heap_is_empty_005d251e
;   undefined4 s_Heap_is_empty_005d251e+1
;   undefined4 s_Heap_is_empty_005d251e+2
;   undefined4 s_Heap_is_empty_005d251e+3
;   TerminatedCString s_Memory_corruption_detect_005d252d
;   undefined4 s_Memory_corruption_detect_005d252d+1
;   undefined4 DAT_005d254f
;
; Called Functions:
;   FUN_005b7790
;   FUN_005ba900
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004807e0
        ;   Label: FUN_004807e0
    PUSH ESI                            ; 004807e1
    PUSH EDI                            ; 004807e2
    PUSH EBP                            ; 004807e3
    MOV EBP,ESP                         ; 004807e4
    SUB ESP,0x14                        ; 004807e6
    AND ESP,0xfffffff8                  ; 004807e9
    XOR EDX,EDX                         ; 004807ec
    XOR EBX,EBX                         ; 004807ee
    XOR EDI,EDI                         ; 004807f0
    XOR ESI,ESI                         ; 004807f2
    MOV word ptr [ESP + 0x4],DX         ; 004807f4
    MOV dword ptr [ESP],EBX             ; 004807f9
    MOV EAX,ESP                         ; 004807fc
        ;   Label: LAB_004807fc
    PUSH EAX                            ; 004807fe
    CALL FUN_005ba900                   ; 004807ff
        ;   XREF to: 005ba900 (UNCONDITIONAL_CALL)  ; undefined FUN_005ba900()
    ADD ESP,0x4                         ; 00480804
    TEST EAX,EAX                        ; 00480807
    JZ 0x00480845                       ; 00480809
        ;   XREF to: 00480845 (CONDITIONAL_JUMP)  ; LAB_00480845
    DEC EAX                             ; 0048080b
    CMP EAX,0x4                         ; 0048080c
    JA 0x004808a0                       ; 0048080f
        ;   XREF to: 004808a0 (CONDITIONAL_JUMP)  ; caseD_5
    JMP dword ptr [EAX*0x4 + 0x4807c0]  ; 00480815 | caseD_1 | caseD_5 | caseD_4
        ;   Label: switchD
    MOV ESI,0x5d251e                    ; 0048081c | = "Heap is empty."
        ;   Label: caseD_1
    MOV EDI,dword ptr [EBP + 0x18]      ; 00480821
        ;   Label: LAB_00480821
    PUSH EDI                            ; 00480824
    MOV AL,byte ptr [ESI]               ; 00480825 | = "Heap is empty." | s_Heap_is_empty_005d251e+2 | s_Memory_corruption_detect_005d252d
        ;   Label: LAB_00480825
    MOV byte ptr [EDI],AL               ; 00480827
    CMP AL,0x0                          ; 00480829
    JZ 0x0048083d                       ; 0048082b
        ;   XREF to: 0048083d (CONDITIONAL_JUMP)  ; LAB_0048083d
    MOV AL,byte ptr [ESI + 0x1]         ; 0048082d | s_Heap_is_empty_005d251e+1 | s_Heap_is_empty_005d251e+3 | s_Memory_corruption_detect_005d252d+1
    ADD ESI,0x2                         ; 00480830
    MOV byte ptr [EDI + 0x1],AL         ; 00480833
    ADD EDI,0x2                         ; 00480836
    CMP AL,0x0                          ; 00480839
    JNZ 0x00480825                      ; 0048083b
        ;   XREF to: 00480825 (CONDITIONAL_JUMP)  ; LAB_00480825
    POP EDI                             ; 0048083d
        ;   Label: LAB_0048083d
    MOV ESP,EBP                         ; 0048083e
    POP EBP                             ; 00480840
    POP EDI                             ; 00480841
    POP ESI                             ; 00480842
    POP EBX                             ; 00480843
    RET                                 ; 00480844
    CMP dword ptr [ESP + 0xa],0x0       ; 00480845
        ;   Label: LAB_00480845
    JNZ 0x004807fc                      ; 0048084a
        ;   XREF to: 004807fc (CONDITIONAL_JUMP)  ; LAB_004807fc
    MOV EAX,dword ptr [ESP + 0x6]       ; 0048084c
    INC EBX                             ; 00480850
    ADD EDI,EAX                         ; 00480851
    CMP ESI,EAX                         ; 00480853
    JNC 0x004807fc                      ; 00480855
        ;   XREF to: 004807fc (CONDITIONAL_JUMP)  ; LAB_004807fc
    MOV ESI,EAX                         ; 00480857
    JMP 0x004807fc                      ; 00480859
        ;   XREF to: 004807fc (UNCONDITIONAL_JUMP)  ; LAB_004807fc
    TEST EBX,EBX                        ; 0048085b
        ;   Label: caseD_4
    JLE 0x0048081c                      ; 0048085d
        ;   XREF to: 0048081c (CONDITIONAL_JUMP)  ; caseD_1
    MOV dword ptr [ESP + 0x10],ESI      ; 0048085f
    FILD dword ptr [ESP + 0x10]         ; 00480863
    SUB ESP,0x8                         ; 00480867
    MOV dword ptr [ESP + 0x18],EDI      ; 0048086a
    FLD double ptr [0x005d254f]         ; 0048086e | DAT_005d254f
    FXCH                                ; 00480874
    FMUL ST1                            ; 00480876
    FILD dword ptr [ESP + 0x18]         ; 00480878
    FMULP ST2                           ; 0048087c
    FSTP double ptr [ESP]               ; 0048087e
    SUB ESP,0x8                         ; 00480881
    FSTP double ptr [ESP]               ; 00480884
    PUSH EBX                            ; 00480887
    PUSH 0x5d24fb                       ; 00480888 | s_Blocks_d_Total_1fk_Max_1_005d24fa+1
    MOV ECX,dword ptr [EBP + 0x18]      ; 0048088d
    PUSH ECX                            ; 00480890
    CALL FUN_005b7790                   ; 00480891
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    ADD ESP,0x1c                        ; 00480896
    MOV ESP,EBP                         ; 00480899
    POP EBP                             ; 0048089b
    POP EDI                             ; 0048089c
    POP ESI                             ; 0048089d
    POP EBX                             ; 0048089e
    RET                                 ; 0048089f
    MOV ESI,0x5d252d                    ; 004808a0 | = "Memory corruption detected!"
        ;   Label: caseD_2
    JMP 0x00480821                      ; 004808a5
        ;   XREF to: 00480821 (UNCONDITIONAL_JUMP)  ; LAB_00480821

