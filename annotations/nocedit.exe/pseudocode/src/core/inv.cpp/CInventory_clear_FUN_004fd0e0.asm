; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_CInventory_clear_FUN_004fd0e0(CInventory *this_ptr)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_inv.cpp_CInventory_dtor_FUN_004fd0c0 at 004fd0c6
;   core_inv.cpp_CInventory_initialize_FUN_004fd190 at 004fd19b
;   core_inv.cpp_CInventory_load_FUN_004ff400 at 004ff412
;
; Referenced Globals:
;   TerminatedCString s_core_inv_cpp_006303b4
;   char* g_CurrentDebugFilename = 0067d200
;   int g_CurrentDebugLine
;
; Called Functions:
;   core_inv.cpp_CInventory_removeItem_FUN_004fea70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fd0e0
        ;   Label: core_inv.cpp_CInventory_clear_FUN_004fd0e0
    PUSH EBP                            ; 004fd0e1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004fd0e2
    CMP dword ptr [EBX + 0x8],0x0       ; 004fd0e6
    JLE 0x004fd114                      ; 004fd0ea
        ;   XREF to: 004fd114 (CONDITIONAL_JUMP)  ; LAB_004fd114
    PUSH EDI                            ; 004fd0ec
    PUSH ESI                            ; 004fd0ed
    CMP dword ptr [EBX + 0x450],0x0     ; 004fd0ee
        ;   Label: LAB_004fd0ee
    SETZ AL                             ; 004fd0f5
    AND EAX,0xff                        ; 004fd0f8
    PUSH EAX                            ; 004fd0fd
    MOV ESI,dword ptr [EBX + 0xc]       ; 004fd0fe
    PUSH ESI                            ; 004fd101
    PUSH EBX                            ; 004fd102
    CALL core_inv.cpp_CInventory_removeItem_FUN_004fea70 ; 004fd103
        ;   XREF to: 004fea70 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_removeItem_FUN_004fea70(CInventory * this_ptr, CDemonActor * item_to_remove, int should_delete_actor)
    MOV EDI,dword ptr [EBX + 0x8]       ; 004fd108
    ADD ESP,0xc                         ; 004fd10b
    TEST EDI,EDI                        ; 004fd10e
    JG 0x004fd0ee                       ; 004fd110
        ;   XREF to: 004fd0ee (CONDITIONAL_JUMP)  ; LAB_004fd0ee
    POP ESI                             ; 004fd112
    POP EDI                             ; 004fd113
    MOV dword ptr [EBX + 0x334],0x0     ; 004fd114
        ;   Label: LAB_004fd114
    MOV dword ptr [EBX + 0x450],0x0     ; 004fd11e
    MOV EBP,dword ptr [EBX + 0x458]     ; 004fd128
    MOV dword ptr [EBX + 0x330],0x0     ; 004fd12e
    TEST EBP,EBP                        ; 004fd138
    JZ 0x004fd15f                       ; 004fd13a
        ;   XREF to: 004fd15f (CONDITIONAL_JUMP)  ; LAB_004fd15f
    MOV EAX,0x6303b4                    ; 004fd13c | = "..\\core\\inv.cpp"
    MOV EDX,0x102                       ; 004fd141
    MOV [0x0067d20c],EAX                ; 004fd146 | g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],EDX      ; 004fd14b | g_CurrentDebugLine
    MOV EAX,EBP                         ; 004fd151
    JNZ 0x004fd162                      ; 004fd153
        ;   XREF to: 004fd162 (CONDITIONAL_JUMP)  ; LAB_004fd162
    MOV dword ptr [EBX + 0x458],0x0     ; 004fd155
    POP EBP                             ; 004fd15f
        ;   Label: LAB_004fd15f
    POP EBX                             ; 004fd160
    RET                                 ; 004fd161
    PUSH 0x2                            ; 004fd162
        ;   Label: LAB_004fd162
    MOV EDX,dword ptr [EBP + 0x154]     ; 004fd164
    PUSH EBP                            ; 004fd16a
    CALL dword ptr [EDX + 0xe4]         ; 004fd16b
    ADD ESP,0x8                         ; 004fd171
    MOV dword ptr [EBX + 0x458],0x0     ; 004fd174
    POP EBP                             ; 004fd17e
    POP EBX                             ; 004fd17f
    RET                                 ; 004fd180

