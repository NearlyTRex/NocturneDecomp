; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEditorTools_displayMemoryDiagnostics_FUN_004819e0(CEditorTools *this_ptr,char *output_buffer)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   output_buffer
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
;   core_game.cpp_CGame_runGameSession_FUN_004b7f90 at 004b8030
;   core_game.cpp_FUN_004b6f30 at 004b789e
;   core_main.c_FUN_004e4400 at 004e449b
;
; Referenced Globals:
;   void* switchdataD_004819c0 = 00481a1c
;   undefined4 s_Blocks_d_Total_1fk_Max_1_005bd350+1
;   TerminatedCString s_Heap_is_empty_005bd374
;   undefined4 s_Heap_is_empty_005bd374+1
;   undefined4 s_Heap_is_empty_005bd374+2
;   undefined4 s_Heap_is_empty_005bd374+3
;   TerminatedCString s_Memory_corruption_detect_005bd383
;   undefined4 s_Memory_corruption_detect_005bd383+1
;   undefined4 DAT_005bd3a5
;
; Called Functions:
;   crt_heap.c__heapwalk_FUN_005a5bd0
;   crt_unknown.c_sprintf_FUN_005a28c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004819e0
        ;   Label: shape_edittool.cpp_CEditorTools_displayMemoryDiagnostics_FUN_004819e0
    PUSH ESI                            ; 004819e1
    PUSH EDI                            ; 004819e2
    PUSH EBP                            ; 004819e3
    MOV EBP,ESP                         ; 004819e4
    SUB ESP,0x14                        ; 004819e6
    AND ESP,0xfffffff8                  ; 004819e9
    XOR EDX,EDX                         ; 004819ec
    XOR EBX,EBX                         ; 004819ee
    XOR EDI,EDI                         ; 004819f0
    XOR ESI,ESI                         ; 004819f2
    MOV word ptr [ESP + 0x4],DX         ; 004819f4
    MOV dword ptr [ESP],EBX             ; 004819f9
    MOV EAX,ESP                         ; 004819fc
        ;   Label: LAB_004819fc
    PUSH EAX                            ; 004819fe
    CALL crt_heap.c__heapwalk_FUN_005a5bd0 ; 004819ff
        ;   XREF to: 005a5bd0 (UNCONDITIONAL_CALL)  ; undefined crt_heap.c__heapwalk_FUN_005a5bd0()
    ADD ESP,0x4                         ; 00481a04
    TEST EAX,EAX                        ; 00481a07
    JZ 0x00481a45                       ; 00481a09
        ;   XREF to: 00481a45 (CONDITIONAL_JUMP)  ; LAB_00481a45
    DEC EAX                             ; 00481a0b
    CMP EAX,0x4                         ; 00481a0c
    JA 0x00481aa0                       ; 00481a0f
        ;   XREF to: 00481aa0 (CONDITIONAL_JUMP)  ; caseD_5
    JMP dword ptr [EAX*0x4 + 0x4819c0]  ; 00481a15 | caseD_1 | caseD_5 | caseD_4
        ;   Label: switchD
    MOV ESI,0x5bd374                    ; 00481a1c | = "Heap is empty."
        ;   Label: caseD_1
    MOV EDI,dword ptr [EBP + 0x18]      ; 00481a21
        ;   Label: LAB_00481a21
    PUSH EDI                            ; 00481a24
    MOV AL,byte ptr [ESI]               ; 00481a25 | = "Heap is empty." | s_Heap_is_empty_005bd374+2 | s_Memory_corruption_detect_005bd383
        ;   Label: LAB_00481a25
    MOV byte ptr [EDI],AL               ; 00481a27
    CMP AL,0x0                          ; 00481a29
    JZ 0x00481a3d                       ; 00481a2b
        ;   XREF to: 00481a3d (CONDITIONAL_JUMP)  ; LAB_00481a3d
    MOV AL,byte ptr [ESI + 0x1]         ; 00481a2d | s_Heap_is_empty_005bd374+1 | s_Heap_is_empty_005bd374+3 | s_Memory_corruption_detect_005bd383+1
    ADD ESI,0x2                         ; 00481a30
    MOV byte ptr [EDI + 0x1],AL         ; 00481a33
    ADD EDI,0x2                         ; 00481a36
    CMP AL,0x0                          ; 00481a39
    JNZ 0x00481a25                      ; 00481a3b
        ;   XREF to: 00481a25 (CONDITIONAL_JUMP)  ; LAB_00481a25
    POP EDI                             ; 00481a3d
        ;   Label: LAB_00481a3d
    MOV ESP,EBP                         ; 00481a3e
    POP EBP                             ; 00481a40
    POP EDI                             ; 00481a41
    POP ESI                             ; 00481a42
    POP EBX                             ; 00481a43
    RET                                 ; 00481a44
    CMP dword ptr [ESP + 0xa],0x0       ; 00481a45
        ;   Label: LAB_00481a45
    JNZ 0x004819fc                      ; 00481a4a
        ;   XREF to: 004819fc (CONDITIONAL_JUMP)  ; LAB_004819fc
    MOV EAX,dword ptr [ESP + 0x6]       ; 00481a4c
    INC EBX                             ; 00481a50
    ADD EDI,EAX                         ; 00481a51
    CMP ESI,EAX                         ; 00481a53
    JNC 0x004819fc                      ; 00481a55
        ;   XREF to: 004819fc (CONDITIONAL_JUMP)  ; LAB_004819fc
    MOV ESI,EAX                         ; 00481a57
    JMP 0x004819fc                      ; 00481a59
        ;   XREF to: 004819fc (UNCONDITIONAL_JUMP)  ; LAB_004819fc
    TEST EBX,EBX                        ; 00481a5b
        ;   Label: caseD_4
    JLE 0x00481a1c                      ; 00481a5d
        ;   XREF to: 00481a1c (CONDITIONAL_JUMP)  ; caseD_1
    MOV dword ptr [ESP + 0x10],ESI      ; 00481a5f
    FILD dword ptr [ESP + 0x10]         ; 00481a63
    SUB ESP,0x8                         ; 00481a67
    MOV dword ptr [ESP + 0x18],EDI      ; 00481a6a
    FLD double ptr [0x005bd3a5]         ; 00481a6e | DAT_005bd3a5
    FXCH                                ; 00481a74
    FMUL ST1                            ; 00481a76
    FILD dword ptr [ESP + 0x18]         ; 00481a78
    FMULP ST2                           ; 00481a7c
    FSTP double ptr [ESP]               ; 00481a7e
    SUB ESP,0x8                         ; 00481a81
    FSTP double ptr [ESP]               ; 00481a84
    PUSH EBX                            ; 00481a87
    PUSH 0x5bd351                       ; 00481a88 | s_Blocks_d_Total_1fk_Max_1_005bd350+1
    MOV ECX,dword ptr [EBP + 0x18]      ; 00481a8d
    PUSH ECX                            ; 00481a90
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 00481a91
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x1c                        ; 00481a96
    MOV ESP,EBP                         ; 00481a99
    POP EBP                             ; 00481a9b
    POP EDI                             ; 00481a9c
    POP ESI                             ; 00481a9d
    POP EBX                             ; 00481a9e
    RET                                 ; 00481a9f
    MOV ESI,0x5bd383                    ; 00481aa0 | = "Memory corruption detected!"
        ;   Label: caseD_2
    JMP 0x00481a21                      ; 00481aa5
        ;   XREF to: 00481a21 (UNCONDITIONAL_JUMP)  ; LAB_00481a21

