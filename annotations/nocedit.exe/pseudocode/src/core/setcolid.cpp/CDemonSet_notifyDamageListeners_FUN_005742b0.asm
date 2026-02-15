; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setcolid_cpp_CDemonSet_notifyDamageListeners_FUN_005742b0(CDemonSet *this_ptr,SDamageInfo *damage_info,CVector3f *actor_position,void *unknown_param)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
; CVector3f *      Stack[0xc]:4   actor_position
; void *           Stack[0x10]:4   unknown_param
; Local Variables:
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_boxactor.cpp_CBoxActor_process_FUN_004219e0 at 00421def
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005742b0
        ;   Label: core_setcolid.cpp_CDemonSet_notifyDamageListeners_FUN_005742b0
    PUSH ESI                            ; 005742b1
    PUSH EBP                            ; 005742b2
    SUB ESP,0x50                        ; 005742b3
    MOV EBX,dword ptr [ESP + 0x6c]      ; 005742b6
    MOV EAX,dword ptr [ESP + 0x60]      ; 005742ba
    MOV EDX,dword ptr [EAX + 0x14f098]  ; 005742be
    XOR ESI,ESI                         ; 005742c4
    TEST EDX,EDX                        ; 005742c6
    JLE 0x005743ae                      ; 005742c8
        ;   XREF to: 005743ae (CONDITIONAL_JUMP)  ; LAB_005743ae
    PUSH EDI                            ; 005742ce
    LEA EAX,[EBX + 0xc]                 ; 005742cf
    MOV dword ptr [ESP + 0x4c],EAX      ; 005742d2
    LEA EAX,[EBX + 0x10]                ; 005742d6
    LEA EBP,[EBX + 0x14]                ; 005742d9
    MOV dword ptr [ESP + 0x50],EAX      ; 005742dc
    LEA EAX,[EBX + 0x1c]                ; 005742e0
    MOV dword ptr [ESP + 0x44],EAX      ; 005742e3
    LEA EAX,[EBX + 0x20]                ; 005742e7
    MOV dword ptr [ESP + 0x48],EAX      ; 005742ea
    LEA EAX,[EBX + 0x24]                ; 005742ee
    MOV EDI,dword ptr [ESP + 0x64]      ; 005742f1
    MOV dword ptr [ESP + 0x40],EAX      ; 005742f5
    MOV EAX,dword ptr [EBX]             ; 005742f9
        ;   Label: LAB_005742f9
    MOV EDX,dword ptr [EDI + 0x14f09c]  ; 005742fb
    MOV dword ptr [ESP + 0x4],EAX       ; 00574301
    MOV EAX,dword ptr [EBX + 0x4]       ; 00574305
    MOV dword ptr [ESP + 0x8],EAX       ; 00574308
    MOV EAX,dword ptr [EBX + 0x8]       ; 0057430c
    MOV dword ptr [ESP + 0xc],EAX       ; 0057430f
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00574313
    MOV EAX,dword ptr [EAX]             ; 00574317
    MOV dword ptr [ESP + 0x10],EAX      ; 00574319
    MOV EAX,dword ptr [ESP + 0x50]      ; 0057431d
    MOV EAX,dword ptr [EAX]             ; 00574321
    MOV dword ptr [ESP + 0x14],EAX      ; 00574323
    MOV EAX,dword ptr [EBP]             ; 00574327
    MOV dword ptr [ESP + 0x18],EAX      ; 0057432a
    MOV EAX,dword ptr [EBX + 0x18]      ; 0057432e
    MOV dword ptr [ESP + 0x1c],EAX      ; 00574331
    MOV EAX,dword ptr [ESP + 0x44]      ; 00574335
    MOV EAX,dword ptr [EAX]             ; 00574339
    MOV dword ptr [ESP + 0x20],EAX      ; 0057433b
    MOV EAX,dword ptr [ESP + 0x48]      ; 0057433f
    MOV EAX,dword ptr [EAX]             ; 00574343
    MOV dword ptr [ESP + 0x24],EAX      ; 00574345
    MOV EAX,dword ptr [ESP + 0x40]      ; 00574349
    MOV EAX,dword ptr [EAX]             ; 0057434d
    MOV dword ptr [ESP + 0x28],EAX      ; 0057434f
    MOV EAX,dword ptr [EBX + 0x28]      ; 00574353
    MOV dword ptr [ESP + 0x2c],EAX      ; 00574356
    MOV EAX,dword ptr [EBX + 0x2c]      ; 0057435a
    PUSH 0x0                            ; 0057435d
    MOV dword ptr [ESP + 0x34],EAX      ; 0057435f
    LEA ECX,[ESP + 0x8]                 ; 00574363
    MOV EAX,dword ptr [EBX + 0x30]      ; 00574367
    PUSH ECX                            ; 0057436a
    MOV dword ptr [ESP + 0x3c],EAX      ; 0057436b
    MOV ECX,dword ptr [ESP + 0x74]      ; 0057436f
    MOV EAX,dword ptr [EBX + 0x34]      ; 00574373
    PUSH ECX                            ; 00574376
    MOV dword ptr [ESP + 0x44],EAX      ; 00574377
    MOV ECX,dword ptr [ESP + 0x74]      ; 0057437b
    MOV EAX,dword ptr [EBX + 0x38]      ; 0057437f
    PUSH ECX                            ; 00574382
    MOV dword ptr [ESP + 0x4c],EAX      ; 00574383
    PUSH EDX                            ; 00574387
    MOV EAX,dword ptr [EDX + 0x154]     ; 00574388
    CALL dword ptr [EAX + 0x118]        ; 0057438e
    ADD ESP,0x14                        ; 00574394
    MOV EAX,dword ptr [ESP + 0x64]      ; 00574397
    INC ESI                             ; 0057439b
    MOV EDX,dword ptr [EAX + 0x14f098]  ; 0057439c
    ADD EDI,0x4                         ; 005743a2
    CMP ESI,EDX                         ; 005743a5
    JL 0x005742f9                       ; 005743a7
        ;   XREF to: 005742f9 (CONDITIONAL_JUMP)  ; LAB_005742f9
    POP EDI                             ; 005743ad
    ADD ESP,0x50                        ; 005743ae
        ;   Label: LAB_005743ae
    POP EBP                             ; 005743b1
    POP ESI                             ; 005743b2
    POP EBX                             ; 005743b3
    RET                                 ; 005743b4

