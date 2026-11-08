; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * FUN_005ac6c4(char *param_1,undefined4 *param_2)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   FUN_005ac7cc at 005ac85d
;
; Called Functions:
;   FUN_005ac578
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ac6c4
        ;   Label: FUN_005ac6c4
    PUSH ESI                            ; 005ac6c5
    SUB ESP,0x10                        ; 005ac6c6
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005ac6c9
    MOV EBX,dword ptr [ESP + 0x20]      ; 005ac6cd
    MOV AH,byte ptr [EDX]               ; 005ac6d1
    MOV ESI,0xffffffff                  ; 005ac6d3
    CMP AH,0x4a                         ; 005ac6d8
    JNZ 0x005ac6e4                      ; 005ac6db
        ;   XREF to: 005ac6e4 (CONDITIONAL_JUMP)  ; LAB_005ac6e4
    MOV ESI,0x1                         ; 005ac6dd
    ADD EDX,ESI                         ; 005ac6e2
    CMP byte ptr [EDX],0x4d             ; 005ac6e4
        ;   Label: LAB_005ac6e4
    JNZ 0x005ac6ec                      ; 005ac6e7
        ;   XREF to: 005ac6ec (CONDITIONAL_JUMP)  ; LAB_005ac6ec
    INC EDX                             ; 005ac6e9
    XOR ESI,ESI                         ; 005ac6ea
    LEA EAX,[ESP + 0xc]                 ; 005ac6ec
        ;   Label: LAB_005ac6ec
    PUSH EAX                            ; 005ac6f0
    PUSH EDX                            ; 005ac6f1
    MOV dword ptr [EBX + 0x20],ESI      ; 005ac6f2
    CALL FUN_005ac578                   ; 005ac6f5
        ;   XREF to: 005ac578 (UNCONDITIONAL_CALL)  ; undefined FUN_005ac578()
    MOV ECX,EAX                         ; 005ac6fa
    ADD ESP,0x8                         ; 005ac6fc
    MOV EDX,EAX                         ; 005ac6ff
    TEST ESI,ESI                        ; 005ac701
    JZ 0x005ac70e                       ; 005ac703
        ;   XREF to: 005ac70e (CONDITIONAL_JUMP)  ; LAB_005ac70e
    MOV EAX,dword ptr [ESP + 0xc]       ; 005ac705
    MOV dword ptr [EBX + 0x1c],EAX      ; 005ac709
    JMP 0x005ac759                      ; 005ac70c
        ;   XREF to: 005ac759 (UNCONDITIONAL_JUMP)  ; LAB_005ac759
    MOV EAX,dword ptr [ESP + 0xc]       ; 005ac70e
        ;   Label: LAB_005ac70e
    DEC EAX                             ; 005ac712
    MOV dword ptr [EBX + 0x10],EAX      ; 005ac713
    CMP byte ptr [ECX],0x2e             ; 005ac716
    JNZ 0x005ac752                      ; 005ac719
        ;   XREF to: 005ac752 (CONDITIONAL_JUMP)  ; LAB_005ac752
    LEA EAX,[ESP + 0xc]                 ; 005ac71b
    PUSH EAX                            ; 005ac71f
    INC ECX                             ; 005ac720
    PUSH ECX                            ; 005ac721
    CALL FUN_005ac578                   ; 005ac722
        ;   XREF to: 005ac578 (UNCONDITIONAL_CALL)  ; undefined FUN_005ac578()
    MOV ECX,EAX                         ; 005ac727
    ADD ESP,0x8                         ; 005ac729
    MOV EDX,EAX                         ; 005ac72c
    MOV EAX,dword ptr [ESP + 0xc]       ; 005ac72e
    MOV dword ptr [EBX + 0xc],EAX       ; 005ac732
    CMP byte ptr [ECX],0x2e             ; 005ac735
    JNZ 0x005ac752                      ; 005ac738
        ;   XREF to: 005ac752 (CONDITIONAL_JUMP)  ; LAB_005ac752
    LEA EAX,[ESP + 0xc]                 ; 005ac73a
    PUSH EAX                            ; 005ac73e
    INC ECX                             ; 005ac73f
    PUSH ECX                            ; 005ac740
    CALL FUN_005ac578                   ; 005ac741
        ;   XREF to: 005ac578 (UNCONDITIONAL_CALL)  ; undefined FUN_005ac578()
    ADD ESP,0x8                         ; 005ac746
    MOV EDX,EAX                         ; 005ac749
    MOV EAX,dword ptr [ESP + 0xc]       ; 005ac74b
    MOV dword ptr [EBX + 0x18],EAX      ; 005ac74f
    MOV dword ptr [EBX + 0x1c],0x0      ; 005ac752
        ;   Label: LAB_005ac752
    MOV ECX,0x2                         ; 005ac759
        ;   Label: LAB_005ac759
    XOR ESI,ESI                         ; 005ac75e
    MOV dword ptr [ESP + 0x8],ECX       ; 005ac760
    MOV dword ptr [ESP],ESI             ; 005ac764
    MOV dword ptr [ESP + 0x4],ESI       ; 005ac767
    CMP byte ptr [EDX],0x2f             ; 005ac76b
    JNZ 0x005ac7af                      ; 005ac76e
        ;   XREF to: 005ac7af (CONDITIONAL_JUMP)  ; LAB_005ac7af
    LEA EAX,[ESP + 0x8]                 ; 005ac770
    PUSH EAX                            ; 005ac774
    INC EDX                             ; 005ac775
    PUSH EDX                            ; 005ac776
    CALL FUN_005ac578                   ; 005ac777
        ;   XREF to: 005ac578 (UNCONDITIONAL_CALL)  ; undefined FUN_005ac578()
    ADD ESP,0x8                         ; 005ac77c
    MOV CH,byte ptr [EAX]               ; 005ac77f
    MOV EDX,EAX                         ; 005ac781
    CMP CH,0x3a                         ; 005ac783
    JNZ 0x005ac7af                      ; 005ac786
        ;   XREF to: 005ac7af (CONDITIONAL_JUMP)  ; LAB_005ac7af
    LEA EDX,[ESP + 0x4]                 ; 005ac788
    PUSH EDX                            ; 005ac78c
    INC EAX                             ; 005ac78d
    PUSH EAX                            ; 005ac78e
    CALL FUN_005ac578                   ; 005ac78f
        ;   XREF to: 005ac578 (UNCONDITIONAL_CALL)  ; undefined FUN_005ac578()
    ADD ESP,0x8                         ; 005ac794
    MOV CL,byte ptr [EAX]               ; 005ac797
    MOV EDX,EAX                         ; 005ac799
    CMP CL,0x3a                         ; 005ac79b
    JNZ 0x005ac7af                      ; 005ac79e
        ;   XREF to: 005ac7af (CONDITIONAL_JUMP)  ; LAB_005ac7af
    MOV EDX,ESP                         ; 005ac7a0
    PUSH EDX                            ; 005ac7a2
    INC EAX                             ; 005ac7a3
    PUSH EAX                            ; 005ac7a4
    CALL FUN_005ac578                   ; 005ac7a5
        ;   XREF to: 005ac578 (UNCONDITIONAL_CALL)  ; undefined FUN_005ac578()
    ADD ESP,0x8                         ; 005ac7aa
    MOV EDX,EAX                         ; 005ac7ad
    MOV EAX,dword ptr [ESP]             ; 005ac7af
        ;   Label: LAB_005ac7af
    MOV dword ptr [EBX],EAX             ; 005ac7b2
    MOV EAX,dword ptr [ESP + 0x4]       ; 005ac7b4
    MOV dword ptr [EBX + 0x4],EAX       ; 005ac7b8
    MOV EAX,dword ptr [ESP + 0x8]       ; 005ac7bb
    MOV dword ptr [EBX + 0x8],EAX       ; 005ac7bf
    MOV EAX,EDX                         ; 005ac7c2
    ADD ESP,0x10                        ; 005ac7c4
    POP ESI                             ; 005ac7c7
    POP EBX                             ; 005ac7c8
    RET                                 ; 005ac7c9

