; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_charactr_cpp_FUN_00433220(CDemonActor *param_1,undefined4 *param_2)
;
; Local Variables:
; undefined        Stack[-0x70]:1  local_70
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined        Stack[-0x58]:1  local_58
; undefined        Stack[-0x4c]:1  local_4c
; undefined        Stack[-0x40]:1  local_40
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined        Stack[-0x28]:1  local_28
; undefined        Stack[-0x1c]:1  local_1c
;
; XREF[4]:
;   core_charactr.cpp_FUN_0042cd30 at 0042cd5d
;   core_prye.cpp_FUN_00518ab0 at 00518cb0
;   core_prye.cpp_FUN_00518cd0 at 0051a213
;   core_thehand.cpp_FUN_0056ca00 at 0056cb77
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0
;   core_actor.cpp_FUN_00408b00
;   core_actor.cpp_FUN_00408b40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00433220
        ;   Label: core_charactr.cpp_FUN_00433220
    PUSH ESI                            ; 00433221
    PUSH EDI                            ; 00433222
    PUSH EBP                            ; 00433223
    SUB ESP,0x60                        ; 00433224
    MOV EBX,dword ptr [ESP + 0x74]      ; 00433227
    MOV EBP,dword ptr [ESP + 0x78]      ; 0043322b
    LEA EAX,[EBX + 0x249c]              ; 0043322f
    PUSH EAX                            ; 00433235
    PUSH EBX                            ; 00433236
    LEA ESI,[ESP + 0x5c]                ; 00433237
    LEA EDI,[ESP + 0x20]                ; 0043323b
    CALL core_actor.cpp_FUN_00408b00    ; 0043323f
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    ADD ESP,0x8                         ; 00433244
    LEA EAX,[EBX + 0x250c]              ; 00433247
    LEA ESI,[ESP + 0x54]                ; 0043324d
    PUSH EAX                            ; 00433251
    MOVSD ES:EDI,ESI                    ; 00433252
    MOVSD ES:EDI,ESI                    ; 00433253
    MOVSD ES:EDI,ESI                    ; 00433254
    PUSH EBX                            ; 00433255
    LEA ESI,[ESP + 0x38]                ; 00433256
    LEA EDI,[ESP + 0x2c]                ; 0043325a
    CALL core_actor.cpp_FUN_00408b00    ; 0043325e
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    LEA ESI,[ESP + 0x38]                ; 00433263
    ADD ESP,0x8                         ; 00433267
    LEA EAX,[EBX + 0x30]                ; 0043326a
    MOVSD ES:EDI,ESI                    ; 0043326d
    MOVSD ES:EDI,ESI                    ; 0043326e
    MOVSD ES:EDI,ESI                    ; 0043326f
    CMP EAX,EBP                         ; 00433270
    JZ 0x00433285                       ; 00433272
        ;   XREF to: 00433285 (CONDITIONAL_JUMP)  ; LAB_00433285
    MOV EDX,dword ptr [EBP]             ; 00433274
    MOV dword ptr [EAX],EDX             ; 00433277
    MOV EDX,dword ptr [EBP + 0x4]       ; 00433279
    MOV dword ptr [EAX + 0x4],EDX       ; 0043327c
    MOV EDX,dword ptr [EBP + 0x8]       ; 0043327f
    MOV dword ptr [EAX + 0x8],EDX       ; 00433282
    PUSH EBX                            ; 00433285
        ;   Label: LAB_00433285
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0 ; 00433286
        ;   XREF to: 004088f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0043328b
    LEA EAX,[ESP + 0x18]                ; 0043328e
    PUSH EAX                            ; 00433292
    PUSH EBX                            ; 00433293
    LEA ESI,[ESP + 0x8]                 ; 00433294
    LEA EDI,[ESP + 0x14]                ; 00433298
    CALL core_actor.cpp_FUN_00408b40    ; 0043329c
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x8]                 ; 004332a1
    LEA EAX,[ESP + 0x14]                ; 004332a5
    ADD ESP,0x8                         ; 004332a9
    LEA EDX,[EBX + 0x249c]              ; 004332ac
    MOVSD ES:EDI,ESI                    ; 004332b2
    MOVSD ES:EDI,ESI                    ; 004332b3
    MOVSD ES:EDI,ESI                    ; 004332b4
    CMP EDX,EAX                         ; 004332b5
    JZ 0x004332cd                       ; 004332b7
        ;   XREF to: 004332cd (CONDITIONAL_JUMP)  ; LAB_004332cd
    MOV EAX,dword ptr [ESP + 0xc]       ; 004332b9
    MOV dword ptr [EDX],EAX             ; 004332bd
    MOV EAX,dword ptr [ESP + 0x10]      ; 004332bf
    MOV dword ptr [EDX + 0x4],EAX       ; 004332c3
    MOV EAX,dword ptr [ESP + 0x14]      ; 004332c6
    MOV dword ptr [EDX + 0x8],EAX       ; 004332ca
    LEA EAX,[ESP + 0x24]                ; 004332cd
        ;   Label: LAB_004332cd
    PUSH EAX                            ; 004332d1
    PUSH EBX                            ; 004332d2
    LEA ESI,[ESP + 0x50]                ; 004332d3
    LEA EDI,[ESP + 0x44]                ; 004332d7
    CALL core_actor.cpp_FUN_00408b40    ; 004332db
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x50]                ; 004332e0
    LEA EAX,[ESP + 0x44]                ; 004332e4
    ADD ESP,0x8                         ; 004332e8
    ADD EBX,0x250c                      ; 004332eb
    MOVSD ES:EDI,ESI                    ; 004332f1
    MOVSD ES:EDI,ESI                    ; 004332f2
    MOVSD ES:EDI,ESI                    ; 004332f3
    CMP EBX,EAX                         ; 004332f4
    JNZ 0x00433300                      ; 004332f6
        ;   XREF to: 00433300 (CONDITIONAL_JUMP)  ; LAB_00433300
    ADD ESP,0x60                        ; 004332f8
    POP EBP                             ; 004332fb
    POP EDI                             ; 004332fc
    POP ESI                             ; 004332fd
    POP EBX                             ; 004332fe
    RET                                 ; 004332ff
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00433300
        ;   Label: LAB_00433300
    MOV dword ptr [EBX],EAX             ; 00433304
    MOV EAX,dword ptr [ESP + 0x40]      ; 00433306
    MOV dword ptr [EBX + 0x4],EAX       ; 0043330a
    MOV EAX,dword ptr [ESP + 0x44]      ; 0043330d
    MOV dword ptr [EBX + 0x8],EAX       ; 00433311
    ADD ESP,0x60                        ; 00433314
    POP EBP                             ; 00433317
    POP EDI                             ; 00433318
    POP ESI                             ; 00433319
    POP EBX                             ; 0043331a
    RET                                 ; 0043331b

