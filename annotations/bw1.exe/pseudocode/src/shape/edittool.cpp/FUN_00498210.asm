; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl shape_edittool_cpp_FUN_00498210(CEditorTools *this_ptr)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   shape_edittool.cpp_CInputString_pasteFromClipboard_FUN_00493150 at 0049315d
;
; Referenced Globals:
;   void* PTR_CloseClipboard_005d04a4 = 001d0a7a
;   void* PTR_GetClipboardData_005d04c0 = 001d0af2
;   void* PTR_OpenClipboard_005d04e4 = 001d0b82
;   undefined4 DAT_005dc268
;   undefined4 DAT_01c3eb58
;   undefined4 DAT_02c9be68
;
; Called Functions:
;   CloseClipboard
;   crt_memory.c_realloc_FUN_005c10d0
;   GetClipboardData
;   OpenClipboard
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00498210
        ;   Label: shape_edittool.cpp_FUN_00498210
    MOV EDX,dword ptr [0x02c9be68]      ; 00498211 | DAT_02c9be68
    PUSH EDX                            ; 00498217
    CALL dword ptr CS:[0x5d04e4]        ; 00498218 | PTR_OpenClipboard_005d04e4
    TEST EAX,EAX                        ; 0049821f
    JNZ 0x00498234                      ; 00498221
        ;   XREF to: 00498234 (CONDITIONAL_JUMP)  ; LAB_00498234
    MOV EBX,dword ptr [0x01c3eb58]      ; 00498223 | DAT_01c3eb58
        ;   Label: LAB_00498223
    TEST EBX,EBX                        ; 00498229
    JNZ 0x0049828c                      ; 0049822b
        ;   XREF to: 0049828c (CONDITIONAL_JUMP)  ; LAB_0049828c
    MOV EAX,0x5dc268                    ; 0049822d | DAT_005dc268
    POP EBX                             ; 00498232
    RET                                 ; 00498233
    PUSH EDI                            ; 00498234
        ;   Label: LAB_00498234
    PUSH ESI                            ; 00498235
    PUSH 0x1                            ; 00498236
    CALL dword ptr CS:[0x5d04c0]        ; 00498238 | PTR_GetClipboardData_005d04c0
    MOV ESI,EAX                         ; 0049823f
    TEST EAX,EAX                        ; 00498241
    JZ 0x00498281                       ; 00498243
        ;   XREF to: 00498281 (CONDITIONAL_JUMP)  ; LAB_00498281
    MOV EDI,EAX                         ; 00498245
    SUB ECX,ECX                         ; 00498247
    DEC ECX                             ; 00498249
    XOR EAX,EAX                         ; 0049824a
    SCASB.REPNE ES:EDI                  ; 0049824c
    NOT ECX                             ; 0049824e
    DEC ECX                             ; 00498250
    LEA EBX,[ECX + 0x1]                 ; 00498251
    PUSH EBX                            ; 00498254
    MOV ECX,dword ptr [0x01c3eb58]      ; 00498255 | DAT_01c3eb58
    PUSH ECX                            ; 0049825b
    CALL crt_memory.c_realloc_FUN_005c10d0 ; 0049825c
        ;   XREF to: 005c10d0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005c10d0(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 00498261
    MOV [0x01c3eb58],EAX                ; 00498264 | DAT_01c3eb58
    TEST EAX,EAX                        ; 00498269
    JZ 0x00498281                       ; 0049826b
        ;   XREF to: 00498281 (CONDITIONAL_JUMP)  ; LAB_00498281
    MOV ECX,EBX                         ; 0049826d
    MOV EDI,EAX                         ; 0049826f
    PUSH EDI                            ; 00498271
    MOV EAX,ECX                         ; 00498272
    SHR ECX,0x2                         ; 00498274
    MOVSD.REP ES:EDI,ESI                ; 00498277
    MOV CL,AL                           ; 00498279
    AND CL,0x3                          ; 0049827b
    MOVSB.REP ES:EDI,ESI                ; 0049827e
    POP EDI                             ; 00498280
    CALL dword ptr CS:[0x5d04a4]        ; 00498281 | PTR_CloseClipboard_005d04a4
        ;   Label: LAB_00498281
    POP ESI                             ; 00498288
    POP EDI                             ; 00498289
    JMP 0x00498223                      ; 0049828a
        ;   XREF to: 00498223 (UNCONDITIONAL_JUMP)  ; LAB_00498223
    MOV EAX,EBX                         ; 0049828c
        ;   Label: LAB_0049828c
    POP EBX                             ; 0049828e
    RET                                 ; 0049828f

