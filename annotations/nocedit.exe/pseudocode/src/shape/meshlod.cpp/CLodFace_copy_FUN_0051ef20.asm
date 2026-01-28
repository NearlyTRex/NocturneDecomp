; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_meshlod_cpp_CLodFace_copy_FUN_0051ef20(CLodFace *this_ptr,CLodFace *other)
;
; Parameters:
; CLodFace *       Stack[0x4]:4   this_ptr
; CLodFace *       Stack[0x8]:4   other
;
; Referenced Globals:
;   WatcomTypeInfo g_CVectorTypeInfo
;
; Called Functions:
;   crt_memory.c_copyObjectArray_FUN_00600bc2
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051ef20
        ;   Label: shape_meshlod.cpp_CLodFace_copy_FUN_0051ef20
    PUSH ESI                            ; 0051ef21
    PUSH EDI                            ; 0051ef22
    MOV EAX,dword ptr [ESP + 0x10]      ; 0051ef23
    MOV EBX,dword ptr [ESP + 0x14]      ; 0051ef27
    MOV EDI,EAX                         ; 0051ef2b
    MOV ESI,EBX                         ; 0051ef2d
    MOVSD ES:EDI,ESI                    ; 0051ef2f
    MOVSD ES:EDI,ESI                    ; 0051ef30
    MOVSD ES:EDI,ESI                    ; 0051ef31
    MOVSD ES:EDI,ESI                    ; 0051ef32
    LEA EDI,[EAX + 0x10]                ; 0051ef33
    LEA ESI,[EBX + 0x10]                ; 0051ef36
    MOVSD ES:EDI,ESI                    ; 0051ef39
    MOVSD ES:EDI,ESI                    ; 0051ef3a
    MOVSD ES:EDI,ESI                    ; 0051ef3b
    MOV ECX,0x6                         ; 0051ef3c
    LEA EDI,[EAX + 0x1c]                ; 0051ef41
    LEA ESI,[EBX + 0x1c]                ; 0051ef44
    MOVSD.REP ES:EDI,ESI                ; 0051ef47
    LEA EDI,[EAX + 0x34]                ; 0051ef49
    LEA ESI,[EBX + 0x34]                ; 0051ef4c
    MOVSD ES:EDI,ESI                    ; 0051ef4f
    MOVSD ES:EDI,ESI                    ; 0051ef50
    MOVSD ES:EDI,ESI                    ; 0051ef51
    MOV EDX,dword ptr [EBX + 0x40]      ; 0051ef52
    MOV dword ptr [EAX + 0x40],EDX      ; 0051ef55
    LEA EDX,[EAX + 0x44]                ; 0051ef58
    LEA EAX,[EBX + 0x44]                ; 0051ef5b
    MOV ECX,dword ptr [EAX]             ; 0051ef5e
    MOV dword ptr [EDX],ECX             ; 0051ef60
    LEA ECX,[EAX + 0x4]                 ; 0051ef62
    ADD EDX,0x4                         ; 0051ef65
    MOV ECX,dword ptr [ECX]             ; 0051ef68
    MOV dword ptr [EDX],ECX             ; 0051ef6a
    ADD EDX,0x4                         ; 0051ef6c
    MOV EAX,dword ptr [EAX + 0x8]       ; 0051ef6f
    PUSH 0x6598c0                       ; 0051ef72 | g_CVectorTypeInfo
    MOV dword ptr [EDX],EAX             ; 0051ef77
    LEA EAX,[EDX + -0x4c]               ; 0051ef79
    PUSH 0x3                            ; 0051ef7c
    LEA EDX,[EBX + 0x54]                ; 0051ef7e
    ADD EAX,0x54                        ; 0051ef81
    PUSH EDX                            ; 0051ef84
    FLD float ptr [EBX + 0x50]          ; 0051ef85
    PUSH EAX                            ; 0051ef88
    FSTP float ptr [EAX + -0x4]         ; 0051ef89
    CALL crt_memory.c_copyObjectArray_FUN_00600bc2 ; 0051ef8c
        ;   XREF to: 00600bc2 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_copyObjectArray_FUN_00600bc2(void * dest, void * source, int count, WatcomTypeInfo * type_info)
    LEA EDI,[EAX + 0x24]                ; 0051ef91
    LEA ESI,[EBX + 0x78]                ; 0051ef94
    MOVSD ES:EDI,ESI                    ; 0051ef97
    MOVSD ES:EDI,ESI                    ; 0051ef98
    MOVSD ES:EDI,ESI                    ; 0051ef99
    MOV EDX,dword ptr [EBX + 0x84]      ; 0051ef9a
    MOV dword ptr [EAX + 0x30],EDX      ; 0051efa0
    SUB EAX,0x54                        ; 0051efa3
    MOV EDX,dword ptr [EBX + 0x88]      ; 0051efa6
    ADD ESP,0x10                        ; 0051efac
    MOV dword ptr [EAX + 0x88],EDX      ; 0051efaf
    POP EDI                             ; 0051efb5
    POP ESI                             ; 0051efb6
    POP EBX                             ; 0051efb7
    RET                                 ; 0051efb8

