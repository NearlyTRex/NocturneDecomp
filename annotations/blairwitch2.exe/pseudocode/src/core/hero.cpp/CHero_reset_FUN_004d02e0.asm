; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hero_cpp_CHero_reset_FUN_004d02e0(CHero *this_ptr)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_doc.cpp_FUN_0045dd30 at 0045dd3c
;   core_stranger.cpp_CStranger_reset_FUN_0056f090 at 0056f09c
;
; Called Functions:
;   core_inv.cpp_CInventory_removeMatchingKeys_FUN_004def40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d02e0
        ;   Label: core_hero.cpp_CHero_reset_FUN_004d02e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004d02e1
    MOV dword ptr [EBX + 0x25604],0x0   ; 004d02e5
    MOV dword ptr [EBX + 0x25608],0x0   ; 004d02ef
    MOV dword ptr [EBX + 0x2560c],0x0   ; 004d02f9
    MOV dword ptr [EBX + 0x25610],0x0   ; 004d0303
    MOV dword ptr [EBX + 0x25614],0x0   ; 004d030d
    PUSH -0x1                           ; 004d0317
    MOV dword ptr [EBX + 0x25618],0x0   ; 004d0319
    LEA EAX,[EBX + 0x2437c]             ; 004d0323
    MOV dword ptr [EBX + 0x2561c],0x0   ; 004d0329
    PUSH EAX                            ; 004d0333
    MOV dword ptr [EBX + 0x276c],0x0    ; 004d0334
    CALL core_inv.cpp_CInventory_removeMatchingKeys_FUN_004def40 ; 004d033e
        ;   XREF to: 004def40 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_removeMatchingKeys_FUN_004def40(CInventory * this_ptr, uint key_mask)
    ADD ESP,0x8                         ; 004d0343
    PUSH 0x0                            ; 004d0346
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004d0348
    PUSH EBX                            ; 004d034e
    CALL dword ptr [EAX + 0x150]        ; 004d034f
    ADD ESP,0x8                         ; 004d0355
    MOV EAX,EBX                         ; 004d0358
    LEA EDX,[EBX + 0xf0]                ; 004d035a
    ADD EAX,0x78                        ; 004d0360
        ;   Label: LAB_004d0360
    MOV dword ptr [EAX + 0x25a8],0x0    ; 004d0363
    CMP EAX,EDX                         ; 004d036d
    JNZ 0x004d0360                      ; 004d036f
        ;   XREF to: 004d0360 (CONDITIONAL_JUMP)  ; LAB_004d0360
    POP EBX                             ; 004d0371
    RET                                 ; 004d0372

