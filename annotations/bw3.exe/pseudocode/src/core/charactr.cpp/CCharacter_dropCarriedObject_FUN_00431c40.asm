; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_dropCarriedObject_FUN_00431c40(CCharacter *this_ptr,int hand_index,CVector3f *drop_direction)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   hand_index
; CVector3f *      Stack[0xc]:4   drop_direction
; Local Variables:
; undefined        Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_prye.cpp_CPrye_dropCarriedObject_FUN_00526ff0 at 0052701e
;
; Called Functions:
;   core_actor.cpp_FUN_00408b00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00431c40
        ;   Label: core_charactr.cpp_CCharacter_dropCarriedObject_FUN_00431c40
    PUSH ESI                            ; 00431c41
    SUB ESP,0x24                        ; 00431c42
    MOV EDX,dword ptr [ESP + 0x30]      ; 00431c45
    MOV ESI,dword ptr [ESP + 0x38]      ; 00431c49
    MOV EAX,dword ptr [ESP + 0x34]      ; 00431c4d
    SHL EAX,0x3                         ; 00431c51
    MOV EBX,EAX                         ; 00431c54
    SHL EAX,0x4                         ; 00431c56
    SUB EAX,EBX                         ; 00431c59
    LEA EBX,[EDX + 0x25a8]              ; 00431c5b
    ADD EBX,EAX                         ; 00431c61
    CMP dword ptr [EBX + 0x8],0x0       ; 00431c63
    JZ 0x00431ccb                       ; 00431c67
        ;   XREF to: 00431ccb (CONDITIONAL_JUMP)  ; LAB_00431ccb
    TEST ESI,ESI                        ; 00431c69
    JZ 0x00431cb0                       ; 00431c6b
        ;   XREF to: 00431cb0 (CONDITIONAL_JUMP)  ; LAB_00431cb0
    PUSH EDI                            ; 00431c6d
    PUSH ESI                            ; 00431c6e
    PUSH EDX                            ; 00431c6f
    LEA ESI,[ESP + 0xc]                 ; 00431c70
    LEA EDI,[ESP + 0x18]                ; 00431c74
    CALL core_actor.cpp_FUN_00408b00    ; 00431c78
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    LEA ESI,[ESP + 0xc]                 ; 00431c7d
    LEA EAX,[ESP + 0x18]                ; 00431c81
    ADD ESP,0x8                         ; 00431c85
    LEA EDX,[ESP + 0x1c]                ; 00431c88
    MOVSD ES:EDI,ESI                    ; 00431c8c
    MOVSD ES:EDI,ESI                    ; 00431c8d
    MOVSD ES:EDI,ESI                    ; 00431c8e
    CMP EDX,EAX                         ; 00431c8f
    JZ 0x00431cab                       ; 00431c91
        ;   XREF to: 00431cab (CONDITIONAL_JUMP)  ; LAB_00431cab
    MOV EAX,dword ptr [ESP + 0x10]      ; 00431c93
    MOV dword ptr [ESP + 0x1c],EAX      ; 00431c97
    MOV EAX,dword ptr [ESP + 0x14]      ; 00431c9b
    MOV dword ptr [ESP + 0x20],EAX      ; 00431c9f
    MOV EAX,dword ptr [ESP + 0x18]      ; 00431ca3
    MOV dword ptr [ESP + 0x24],EAX      ; 00431ca7
    LEA ESI,[ESP + 0x1c]                ; 00431cab
        ;   Label: LAB_00431cab
    POP EDI                             ; 00431caf
    PUSH ESI                            ; 00431cb0
        ;   Label: LAB_00431cb0
    MOV EAX,dword ptr [EBX + 0x8]       ; 00431cb1
    PUSH EAX                            ; 00431cb4
    MOV EDX,dword ptr [EAX + 0x154]     ; 00431cb5
    CALL dword ptr [EDX + 0x8c]         ; 00431cbb
    ADD ESP,0x8                         ; 00431cc1
    MOV dword ptr [EBX + 0x8],0x0       ; 00431cc4
    ADD ESP,0x24                        ; 00431ccb
        ;   Label: LAB_00431ccb
    POP ESI                             ; 00431cce
    POP EBX                             ; 00431ccf
    RET                                 ; 00431cd0

