; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl shape_edittool_cpp_CEditorTools_getClipboardText_FUN_0047fbb0(CEditorTools *this_ptr)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   shape_edittool.cpp_CInputString_pasteFromClipboard_FUN_0047ac60 at 0047ac6d
;
; Referenced Globals:
;   void* PTR_CloseClipboard_005c8498 = 001c8a62
;   void* PTR_GetClipboardData_005c84b0 = 001c8aca
;   void* PTR_OpenClipboard_005c84d4 = 001c8b5a
;   undefined4 DAT_005d24cf
;   undefined4 DAT_01c25598
;   undefined4 DAT_02664628
;
; Called Functions:
;   CloseClipboard
;   crt_memory.c_realloc_FUN_005b8ce0
;   GetClipboardData
;   OpenClipboard
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047fbb0
        ;   Label: shape_edittool.cpp_CEditorTools_getClipboardText_FUN_0047fbb0
    MOV EDX,dword ptr [0x02664628]      ; 0047fbb1 | DAT_02664628
    PUSH EDX                            ; 0047fbb7
    CALL dword ptr CS:[0x5c84d4]        ; 0047fbb8 | PTR_OpenClipboard_005c84d4
    TEST EAX,EAX                        ; 0047fbbf
    JNZ 0x0047fbd4                      ; 0047fbc1
        ;   XREF to: 0047fbd4 (CONDITIONAL_JUMP)  ; LAB_0047fbd4
    MOV EBX,dword ptr [0x01c25598]      ; 0047fbc3 | DAT_01c25598
        ;   Label: LAB_0047fbc3
    TEST EBX,EBX                        ; 0047fbc9
    JNZ 0x0047fc2c                      ; 0047fbcb
        ;   XREF to: 0047fc2c (CONDITIONAL_JUMP)  ; LAB_0047fc2c
    MOV EAX,0x5d24cf                    ; 0047fbcd | DAT_005d24cf
    POP EBX                             ; 0047fbd2
    RET                                 ; 0047fbd3
    PUSH EDI                            ; 0047fbd4
        ;   Label: LAB_0047fbd4
    PUSH ESI                            ; 0047fbd5
    PUSH 0x1                            ; 0047fbd6
    CALL dword ptr CS:[0x5c84b0]        ; 0047fbd8 | PTR_GetClipboardData_005c84b0
    MOV ESI,EAX                         ; 0047fbdf
    TEST EAX,EAX                        ; 0047fbe1
    JZ 0x0047fc21                       ; 0047fbe3
        ;   XREF to: 0047fc21 (CONDITIONAL_JUMP)  ; LAB_0047fc21
    MOV EDI,EAX                         ; 0047fbe5
    SUB ECX,ECX                         ; 0047fbe7
    DEC ECX                             ; 0047fbe9
    XOR EAX,EAX                         ; 0047fbea
    SCASB.REPNE ES:EDI                  ; 0047fbec
    NOT ECX                             ; 0047fbee
    DEC ECX                             ; 0047fbf0
    LEA EBX,[ECX + 0x1]                 ; 0047fbf1
    PUSH EBX                            ; 0047fbf4
    MOV ECX,dword ptr [0x01c25598]      ; 0047fbf5 | DAT_01c25598
    PUSH ECX                            ; 0047fbfb
    CALL crt_memory.c_realloc_FUN_005b8ce0 ; 0047fbfc
        ;   XREF to: 005b8ce0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005b8ce0(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 0047fc01
    MOV [0x01c25598],EAX                ; 0047fc04 | DAT_01c25598
    TEST EAX,EAX                        ; 0047fc09
    JZ 0x0047fc21                       ; 0047fc0b
        ;   XREF to: 0047fc21 (CONDITIONAL_JUMP)  ; LAB_0047fc21
    MOV ECX,EBX                         ; 0047fc0d
    MOV EDI,EAX                         ; 0047fc0f
    PUSH EDI                            ; 0047fc11
    MOV EAX,ECX                         ; 0047fc12
    SHR ECX,0x2                         ; 0047fc14
    MOVSD.REP ES:EDI,ESI                ; 0047fc17
    MOV CL,AL                           ; 0047fc19
    AND CL,0x3                          ; 0047fc1b
    MOVSB.REP ES:EDI,ESI                ; 0047fc1e
    POP EDI                             ; 0047fc20
    CALL dword ptr CS:[0x5c8498]        ; 0047fc21 | PTR_CloseClipboard_005c8498
        ;   Label: LAB_0047fc21
    POP ESI                             ; 0047fc28
    POP EDI                             ; 0047fc29
    JMP 0x0047fbc3                      ; 0047fc2a
        ;   XREF to: 0047fbc3 (UNCONDITIONAL_JUMP)  ; LAB_0047fbc3
    MOV EAX,EBX                         ; 0047fc2c
        ;   Label: LAB_0047fc2c
    POP EBX                             ; 0047fc2e
    RET                                 ; 0047fc2f

