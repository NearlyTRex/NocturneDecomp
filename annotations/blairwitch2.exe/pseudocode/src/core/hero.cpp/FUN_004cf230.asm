; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_hero_cpp_FUN_004cf230(CHero *this_ptr)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
;
; XREF[11]:
;   core_colonel.cpp_FUN_00435830 at 00435cca
;   core_doc.cpp_FUN_00453250 at 00453bd4
;   core_gabriela.cpp_FUN_004ad640 at 004ae92c
;   core_gabriela.cpp_FUN_004af410 at 004af8bb
;   core_haystack.cpp_FUN_004cc990 at 004cce5c
;   core_hero.cpp_FUN_004d03b0 at 004d0563
;   core_icepick.cpp_FUN_004d4c50 at 004d5241
;   core_stranger.cpp_FUN_005656f0 at 00565e45
;   core_stranger.cpp_FUN_0056e4d0 at 0056e659
;   core_svetlana.cpp_FUN_00570510 at 00570ac6
;   ... and 1 more
;
; Called Functions:
;   core_door.cpp_FUN_0045efc0
;   core_door.cpp_FUN_00460800
;   core_inv.cpp_CInventory_checkHasMatchingKey_FUN_004dee70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cf230
        ;   Label: core_hero.cpp_FUN_004cf230
    PUSH ESI                            ; 004cf231
    PUSH EBP                            ; 004cf232
    MOV EBX,dword ptr [ESP + 0x10]      ; 004cf233
    MOV EDX,dword ptr [EBX + 0x25604]   ; 004cf237
    XOR ESI,ESI                         ; 004cf23d
    TEST EDX,EDX                        ; 004cf23f
    JNZ 0x004cf249                      ; 004cf241
        ;   XREF to: 004cf249 (CONDITIONAL_JUMP)  ; LAB_004cf249
    MOV EAX,ESI                         ; 004cf243
    POP EBP                             ; 004cf245
    POP ESI                             ; 004cf246
    POP EBX                             ; 004cf247
    RET                                 ; 004cf248
    PUSH 0x1                            ; 004cf249
        ;   Label: LAB_004cf249
    MOV ECX,dword ptr [EDX + 0xaec]     ; 004cf24b
    PUSH ECX                            ; 004cf251
    LEA EAX,[EBX + 0x2437c]             ; 004cf252
    PUSH EAX                            ; 004cf258
    CALL core_inv.cpp_CInventory_checkHasMatchingKey_FUN_004dee70 ; 004cf259
        ;   XREF to: 004dee70 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_CInventory_checkHasMatchingKey_FUN_004dee70(CInventory * this_ptr, uint key_mask, int show_message)
    ADD ESP,0xc                         ; 004cf25e
    TEST EAX,EAX                        ; 004cf261
    JZ 0x004cf289                       ; 004cf263
        ;   XREF to: 004cf289 (CONDITIONAL_JUMP)  ; LAB_004cf289
    MOV EBP,dword ptr [EBX + 0x25604]   ; 004cf265
    PUSH EBP                            ; 004cf26b
    MOV ESI,0x1                         ; 004cf26c
    CALL core_door.cpp_FUN_0045efc0     ; 004cf271
        ;   XREF to: 0045efc0 (UNCONDITIONAL_CALL)  ; void core_door.cpp_FUN_0045efc0(CDoor * this_ptr)
    ADD ESP,0x4                         ; 004cf276
    MOV dword ptr [EBX + 0x25604],0x0   ; 004cf279
    MOV EAX,ESI                         ; 004cf283
    POP EBP                             ; 004cf285
    POP ESI                             ; 004cf286
    POP EBX                             ; 004cf287
    RET                                 ; 004cf288
    PUSH EDI                            ; 004cf289
        ;   Label: LAB_004cf289
    MOV EDI,dword ptr [EBX + 0x25604]   ; 004cf28a
    PUSH EDI                            ; 004cf290
    CALL core_door.cpp_FUN_00460800     ; 004cf291
        ;   XREF to: 00460800 (UNCONDITIONAL_CALL)  ; uint core_door.cpp_FUN_00460800(CDoor * this_ptr)
    ADD ESP,0x4                         ; 004cf296
    POP EDI                             ; 004cf299
    MOV dword ptr [EBX + 0x25604],0x0   ; 004cf29a
    MOV EAX,ESI                         ; 004cf2a4
    POP EBP                             ; 004cf2a6
    POP ESI                             ; 004cf2a7
    POP EBX                             ; 004cf2a8
    RET                                 ; 004cf2a9

