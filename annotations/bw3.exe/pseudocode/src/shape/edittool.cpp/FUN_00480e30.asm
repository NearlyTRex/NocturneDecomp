; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_FUN_00480e30(CEditorTools *this_ptr,char *text_data)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text_data
;
; XREF[2]:
;   shape_edittool.cpp_CInputString_copySelectionToClipboard_FUN_0047bca0 at 0047bcd9
;   shape_edittool.cpp_CStrList_copyToClipboard_FUN_00482740 at 004827fe
;
; Referenced Globals:
;   void* PTR_CloseClipboard_005b34a4 = 001b3a7a
;   void* PTR_OpenClipboard_005b34e0 = 001b3b70
;   void* PTR_SetClipboardData_005b34f0 = 001b3bb4
;   void* PTR_GlobalAlloc_005b35dc = 001b3fd0
;   void* PTR_GlobalFree_005b35e0 = 001b3fde
;   void* PTR_GlobalLock_005b35e4 = 001b3fec
;   void* PTR_GlobalUnlock_005b35ec = 001b4010
;   undefined1 DAT_005bd326
;   undefined1 DAT_005bd327
;   undefined4 DAT_01c5b0e8
;   undefined4 DAT_02d21b78
;
; Called Functions:
;   CloseClipboard
;   crt_memory.c_realloc_FUN_005a3e50
;   GlobalAlloc
;   GlobalFree
;   GlobalLock
;   GlobalUnlock
;   OpenClipboard
;   SetClipboardData
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00480e30
        ;   Label: shape_edittool.cpp_FUN_00480e30
    PUSH ESI                            ; 00480e31
    PUSH EDI                            ; 00480e32
    PUSH EBP                            ; 00480e33
    CMP dword ptr [ESP + 0x18],0x0      ; 00480e34
    JNZ 0x00480e43                      ; 00480e39
        ;   XREF to: 00480e43 (CONDITIONAL_JUMP)  ; LAB_00480e43
    MOV dword ptr [ESP + 0x18],0x5bd326 ; 00480e3b | DAT_005bd326
    MOV EDI,dword ptr [ESP + 0x18]      ; 00480e43
        ;   Label: LAB_00480e43
    SUB ECX,ECX                         ; 00480e47
    DEC ECX                             ; 00480e49
    XOR EAX,EAX                         ; 00480e4a
    SCASB.REPNE ES:EDI                  ; 00480e4c | DAT_005bd326 | DAT_005bd327
    NOT ECX                             ; 00480e4e
    DEC ECX                             ; 00480e50
    MOV ESI,dword ptr [0x02d21b78]      ; 00480e51 | DAT_02d21b78
    PUSH ESI                            ; 00480e57
    LEA EBX,[ECX + 0x1]                 ; 00480e58
    CALL dword ptr CS:[0x5b34e0]        ; 00480e5b | PTR_OpenClipboard_005b34e0
    TEST EAX,EAX                        ; 00480e62
    JZ 0x00480eb6                       ; 00480e64
        ;   XREF to: 00480eb6 (CONDITIONAL_JUMP)  ; LAB_00480eb6
    PUSH EBX                            ; 00480e66
    PUSH 0x2002                         ; 00480e67
    CALL dword ptr CS:[0x5b35dc]        ; 00480e6c | PTR_GlobalAlloc_005b35dc
    MOV EBP,EAX                         ; 00480e73
    TEST EAX,EAX                        ; 00480e75
    JZ 0x00480eaf                       ; 00480e77
        ;   XREF to: 00480eaf (CONDITIONAL_JUMP)  ; LAB_00480eaf
    PUSH EAX                            ; 00480e79
    CALL dword ptr CS:[0x5b35e4]        ; 00480e7a | PTR_GlobalLock_005b35e4
    TEST EAX,EAX                        ; 00480e81
    JZ 0x00480ed4                       ; 00480e83
        ;   XREF to: 00480ed4 (CONDITIONAL_JUMP)  ; LAB_00480ed4
    MOV ESI,dword ptr [ESP + 0x18]      ; 00480e85
    MOV ECX,EBX                         ; 00480e89
    MOV EDI,EAX                         ; 00480e8b
    PUSH EDI                            ; 00480e8d
    MOV EAX,ECX                         ; 00480e8e
    SHR ECX,0x2                         ; 00480e90
    MOVSD.REP ES:EDI,ESI                ; 00480e93
    MOV CL,AL                           ; 00480e95
    AND CL,0x3                          ; 00480e97
    MOVSB.REP ES:EDI,ESI                ; 00480e9a
    POP EDI                             ; 00480e9c
    PUSH EBP                            ; 00480e9d
    CALL dword ptr CS:[0x5b35ec]        ; 00480e9e | PTR_GlobalUnlock_005b35ec
    PUSH EBP                            ; 00480ea5
    PUSH 0x1                            ; 00480ea6
    CALL dword ptr CS:[0x5b34f0]        ; 00480ea8 | PTR_SetClipboardData_005b34f0
    CALL dword ptr CS:[0x5b34a4]        ; 00480eaf | PTR_CloseClipboard_005b34a4
        ;   Label: LAB_00480eaf
    PUSH EBX                            ; 00480eb6
        ;   Label: LAB_00480eb6
    MOV EDI,dword ptr [0x01c5b0e8]      ; 00480eb7 | DAT_01c5b0e8
    PUSH EDI                            ; 00480ebd
    CALL crt_memory.c_realloc_FUN_005a3e50 ; 00480ebe
        ;   XREF to: 005a3e50 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005a3e50(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 00480ec3
    MOV [0x01c5b0e8],EAX                ; 00480ec6 | DAT_01c5b0e8
    TEST EAX,EAX                        ; 00480ecb
    JNZ 0x00480ede                      ; 00480ecd
        ;   XREF to: 00480ede (CONDITIONAL_JUMP)  ; LAB_00480ede
    POP EBP                             ; 00480ecf
    POP EDI                             ; 00480ed0
    POP ESI                             ; 00480ed1
    POP EBX                             ; 00480ed2
    RET                                 ; 00480ed3
    PUSH EBP                            ; 00480ed4
        ;   Label: LAB_00480ed4
    CALL dword ptr CS:[0x5b35e0]        ; 00480ed5 | PTR_GlobalFree_005b35e0
    JMP 0x00480eaf                      ; 00480edc
        ;   XREF to: 00480eaf (UNCONDITIONAL_JUMP)  ; LAB_00480eaf
    MOV ESI,dword ptr [ESP + 0x18]      ; 00480ede
        ;   Label: LAB_00480ede
    MOV ECX,EBX                         ; 00480ee2
    MOV EDI,EAX                         ; 00480ee4
    PUSH EDI                            ; 00480ee6
    MOV EAX,ECX                         ; 00480ee7
    SHR ECX,0x2                         ; 00480ee9
    MOVSD.REP ES:EDI,ESI                ; 00480eec
    MOV CL,AL                           ; 00480eee
    AND CL,0x3                          ; 00480ef0
    MOVSB.REP ES:EDI,ESI                ; 00480ef3
    POP EDI                             ; 00480ef5
    POP EBP                             ; 00480ef6
    POP EDI                             ; 00480ef7
    POP ESI                             ; 00480ef8
    POP EBX                             ; 00480ef9
    RET                                 ; 00480efa

