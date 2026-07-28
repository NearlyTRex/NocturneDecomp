; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl shape_edittool_cpp_CEditorTools_getClipboardText_FUN_00472c90(CEditorTools *this_ptr)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   shape_edittool.cpp_CInputString_pasteFromClipboard_FUN_0046f330 at 0046f33d
;
; Referenced Globals:
;   void* PTR_CloseClipboard_00575418 = 00175904
;   void* PTR_GetClipboardData_00575430 = 0017596c
;   void* PTR_OpenClipboard_00575454 = 001759fc
;   char CHAR_00h_0057ea91 = \x00
;   undefined4 DAT_01bcd078
;   undefined4 DAT_02de2098
;
; Called Functions:
;   CloseClipboard
;   crt_memory.c_realloc_FUN_00564a70
;   GetClipboardData
;   OpenClipboard
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00472c90
        ;   Label: shape_edittool.cpp_CEditorTools_getClipboardText_FUN_00472c90
    MOV EDX,dword ptr [0x02de2098]      ; 00472c91 | DAT_02de2098
    PUSH EDX                            ; 00472c97
    CALL dword ptr CS:[0x575454]        ; 00472c98 | PTR_OpenClipboard_00575454
    TEST EAX,EAX                        ; 00472c9f
    JNZ 0x00472cb4                      ; 00472ca1
        ;   XREF to: 00472cb4 (CONDITIONAL_JUMP)  ; LAB_00472cb4
    MOV EBX,dword ptr [0x01bcd078]      ; 00472ca3 | DAT_01bcd078
        ;   Label: LAB_00472ca3
    TEST EBX,EBX                        ; 00472ca9
    JNZ 0x00472d0c                      ; 00472cab
        ;   XREF to: 00472d0c (CONDITIONAL_JUMP)  ; LAB_00472d0c
    MOV EAX,0x57ea91                    ; 00472cad | CHAR_00h_0057ea91
    POP EBX                             ; 00472cb2
    RET                                 ; 00472cb3
    PUSH EDI                            ; 00472cb4
        ;   Label: LAB_00472cb4
    PUSH ESI                            ; 00472cb5
    PUSH 0x1                            ; 00472cb6
    CALL dword ptr CS:[0x575430]        ; 00472cb8 | PTR_GetClipboardData_00575430
    MOV ESI,EAX                         ; 00472cbf
    TEST EAX,EAX                        ; 00472cc1
    JZ 0x00472d01                       ; 00472cc3
        ;   XREF to: 00472d01 (CONDITIONAL_JUMP)  ; LAB_00472d01
    MOV EDI,EAX                         ; 00472cc5
    SUB ECX,ECX                         ; 00472cc7
    DEC ECX                             ; 00472cc9
    XOR EAX,EAX                         ; 00472cca
    SCASB.REPNE ES:EDI                  ; 00472ccc
    NOT ECX                             ; 00472cce
    DEC ECX                             ; 00472cd0
    LEA EBX,[ECX + 0x1]                 ; 00472cd1
    PUSH EBX                            ; 00472cd4
    MOV ECX,dword ptr [0x01bcd078]      ; 00472cd5 | DAT_01bcd078
    PUSH ECX                            ; 00472cdb
    CALL crt_memory.c_realloc_FUN_00564a70 ; 00472cdc
        ;   XREF to: 00564a70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_00564a70(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 00472ce1
    MOV [0x01bcd078],EAX                ; 00472ce4 | DAT_01bcd078
    TEST EAX,EAX                        ; 00472ce9
    JZ 0x00472d01                       ; 00472ceb
        ;   XREF to: 00472d01 (CONDITIONAL_JUMP)  ; LAB_00472d01
    MOV ECX,EBX                         ; 00472ced
    MOV EDI,EAX                         ; 00472cef
    PUSH EDI                            ; 00472cf1
    MOV EAX,ECX                         ; 00472cf2
    SHR ECX,0x2                         ; 00472cf4
    MOVSD.REP ES:EDI,ESI                ; 00472cf7
    MOV CL,AL                           ; 00472cf9
    AND CL,0x3                          ; 00472cfb
    MOVSB.REP ES:EDI,ESI                ; 00472cfe
    POP EDI                             ; 00472d00
    CALL dword ptr CS:[0x575418]        ; 00472d01 | PTR_CloseClipboard_00575418
        ;   Label: LAB_00472d01
    POP ESI                             ; 00472d08
    POP EDI                             ; 00472d09
    JMP 0x00472ca3                      ; 00472d0a
        ;   XREF to: 00472ca3 (UNCONDITIONAL_JUMP)  ; LAB_00472ca3
    MOV EAX,EBX                         ; 00472d0c
        ;   Label: LAB_00472d0c
    POP EBX                             ; 00472d0e
    RET                                 ; 00472d0f

