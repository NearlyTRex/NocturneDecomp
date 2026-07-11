; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004736d0(undefined4 param_1,char *param_2)
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
;   FUN_0049cc10 at 0049d494
;   FUN_0049da10 at 0049dab0
;   FUN_004c8510 at 004c85ab
;
; Referenced Globals:
;   void* switchdataD_004736bc = 0047370c
;   undefined4 s_Blocks:_%d_Total:_%.1fk_Max:_%.1_0057eab5+1
;   string s_Heap_is_empty._0057ead9
;   undefined4 s_eap_is_empty._0057ead9+1
;   undefined4 s_ap_is_empty._0057ead9+2
;   undefined4 s_p_is_empty._0057ead9+3
;   string s_Memory_corruption_detected!_0057eae8
;   undefined4 s_emory_corruption_detected!_0057eae8+1
;   undefined4 DAT_0057eb0a
;
; Called Functions:
;   FUN_00563c90
;   FUN_00566b90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004736d0
        ;   Label: FUN_004736d0
    PUSH ESI                            ; 004736d1
    PUSH EDI                            ; 004736d2
    PUSH EBP                            ; 004736d3
    MOV EBP,ESP                         ; 004736d4
    SUB ESP,0x14                        ; 004736d6
    AND ESP,0xfffffff8                  ; 004736d9
    XOR EDX,EDX                         ; 004736dc
    XOR EBX,EBX                         ; 004736de
    XOR EDI,EDI                         ; 004736e0
    XOR ESI,ESI                         ; 004736e2
    MOV word ptr [ESP + 0x4],DX         ; 004736e4
    MOV dword ptr [ESP],EBX             ; 004736e9
    MOV EAX,ESP                         ; 004736ec
        ;   Label: LAB_004736ec
    PUSH EAX                            ; 004736ee
    CALL FUN_00566b90                   ; 004736ef
        ;   XREF to: 00566b90 (UNCONDITIONAL_CALL)  ; undefined FUN_00566b90()
    ADD ESP,0x4                         ; 004736f4
    TEST EAX,EAX                        ; 004736f7
    JZ 0x00473735                       ; 004736f9
        ;   XREF to: 00473735 (CONDITIONAL_JUMP)  ; LAB_00473735
    DEC EAX                             ; 004736fb
    CMP EAX,0x4                         ; 004736fc
    JA 0x00473790                       ; 004736ff
        ;   XREF to: 00473790 (CONDITIONAL_JUMP)  ; caseD_5
    JMP dword ptr [EAX*0x4 + 0x4736bc]  ; 00473705 | caseD_1 | caseD_5 | caseD_4
        ;   Label: switchD
    MOV ESI,0x57ead9                    ; 0047370c | = "Heap is empty."
        ;   Label: caseD_1
    MOV EDI,dword ptr [EBP + 0x18]      ; 00473711
        ;   Label: LAB_00473711
    PUSH EDI                            ; 00473714
    MOV AL,byte ptr [ESI]               ; 00473715 | = "Heap is empty." | s_ap_is_empty._0057ead9+2 | s_Memory_corruption_detected!_0057eae8
        ;   Label: LAB_00473715
    MOV byte ptr [EDI],AL               ; 00473717
    CMP AL,0x0                          ; 00473719
    JZ 0x0047372d                       ; 0047371b
        ;   XREF to: 0047372d (CONDITIONAL_JUMP)  ; LAB_0047372d
    MOV AL,byte ptr [ESI + 0x1]         ; 0047371d | s_eap_is_empty._0057ead9+1 | s_p_is_empty._0057ead9+3 | s_emory_corruption_detected!_0057eae8+1
    ADD ESI,0x2                         ; 00473720
    MOV byte ptr [EDI + 0x1],AL         ; 00473723
    ADD EDI,0x2                         ; 00473726
    CMP AL,0x0                          ; 00473729
    JNZ 0x00473715                      ; 0047372b
        ;   XREF to: 00473715 (CONDITIONAL_JUMP)  ; LAB_00473715
    POP EDI                             ; 0047372d
        ;   Label: LAB_0047372d
    MOV ESP,EBP                         ; 0047372e
    POP EBP                             ; 00473730
    POP EDI                             ; 00473731
    POP ESI                             ; 00473732
    POP EBX                             ; 00473733
    RET                                 ; 00473734
    CMP dword ptr [ESP + 0xa],0x0       ; 00473735
        ;   Label: LAB_00473735
    JNZ 0x004736ec                      ; 0047373a
        ;   XREF to: 004736ec (CONDITIONAL_JUMP)  ; LAB_004736ec
    MOV EAX,dword ptr [ESP + 0x6]       ; 0047373c
    INC EBX                             ; 00473740
    ADD EDI,EAX                         ; 00473741
    CMP ESI,EAX                         ; 00473743
    JNC 0x004736ec                      ; 00473745
        ;   XREF to: 004736ec (CONDITIONAL_JUMP)  ; LAB_004736ec
    MOV ESI,EAX                         ; 00473747
    JMP 0x004736ec                      ; 00473749
        ;   XREF to: 004736ec (UNCONDITIONAL_JUMP)  ; LAB_004736ec
    TEST EBX,EBX                        ; 0047374b
        ;   Label: caseD_4
    JLE 0x0047370c                      ; 0047374d
        ;   XREF to: 0047370c (CONDITIONAL_JUMP)  ; caseD_1
    MOV dword ptr [ESP + 0x10],ESI      ; 0047374f
    FILD dword ptr [ESP + 0x10]         ; 00473753
    SUB ESP,0x8                         ; 00473757
    MOV dword ptr [ESP + 0x18],EDI      ; 0047375a
    FLD double ptr [0x0057eb0a]         ; 0047375e | DAT_0057eb0a
    FXCH                                ; 00473764
    FMUL ST1                            ; 00473766
    FILD dword ptr [ESP + 0x18]         ; 00473768
    FMULP ST2                           ; 0047376c
    FSTP double ptr [ESP]               ; 0047376e
    SUB ESP,0x8                         ; 00473771
    FSTP double ptr [ESP]               ; 00473774
    PUSH EBX                            ; 00473777
    PUSH 0x57eab6                       ; 00473778 | s_Blocks:_%d_Total:_%.1fk_Max:_%.1_0057eab5+1
    MOV ECX,dword ptr [EBP + 0x18]      ; 0047377d
    PUSH ECX                            ; 00473780
    CALL FUN_00563c90                   ; 00473781
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined FUN_00563c90()
    ADD ESP,0x1c                        ; 00473786
    MOV ESP,EBP                         ; 00473789
    POP EBP                             ; 0047378b
    POP EDI                             ; 0047378c
    POP ESI                             ; 0047378d
    POP EBX                             ; 0047378e
    RET                                 ; 0047378f
    MOV ESI,0x57eae8                    ; 00473790 | = "Memory corruption detected!"
        ;   Label: caseD_2
    JMP 0x00473711                      ; 00473795
        ;   XREF to: 00473711 (UNCONDITIONAL_JUMP)  ; LAB_00473711

