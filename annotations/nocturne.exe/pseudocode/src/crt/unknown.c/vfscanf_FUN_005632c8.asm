; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_unknown_c_vfscanf_FUN_005632c8(_FILE *file,char *format,va_list_t args)
;
; Parameters:
; _FILE *          Stack[0x4]:4   file
; char *           Stack[0x8]:4   format
; va_list_t        Stack[0xc]:4   args
;
; XREF[1]:
;   crt_stdio.c_fscanf_FUN_00563350 at 00563368
;
; Referenced Globals:
;   void* PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ac0 = 005671e4
;   void* PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ac4 = 005671e4
;
; Called Functions:
;   crt_sync.c_CriticalSectionStub_FUN_005671e4
;   crt_unknown.c_FUN_00567560
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005632c8
        ;   Label: crt_unknown.c_vfscanf_FUN_005632c8
    PUSH ESI                            ; 005632c9
    PUSH EDI                            ; 005632ca
    PUSH EBP                            ; 005632cb
    SUB ESP,0x14                        ; 005632cc
    MOV EBX,dword ptr [ESP + 0x28]      ; 005632cf
    MOV EDX,dword ptr [EBX + 0x10]      ; 005632d3
    PUSH EDX                            ; 005632d6
    CALL dword ptr [0x005c1ac0]         ; 005632d7 | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ac0
    MOV EAX,dword ptr [EBX + 0x8]       ; 005632dd
    MOV ECX,dword ptr [EAX + 0xc]       ; 005632e0
    ADD ESP,0x4                         ; 005632e3
    CMP ECX,0x1                         ; 005632e6
    JZ 0x00563307                       ; 005632e9
        ;   XREF to: 00563307 (CONDITIONAL_JUMP)  ; LAB_00563307
    TEST ECX,ECX                        ; 005632eb
    JZ 0x00563300                       ; 005632ed
        ;   XREF to: 00563300 (CONDITIONAL_JUMP)  ; LAB_00563300
    MOV EDI,dword ptr [EBX + 0x10]      ; 005632ef
    PUSH EDI                            ; 005632f2
    CALL dword ptr [0x005c1ac4]         ; 005632f3 | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ac4
    ADD ESP,0x4                         ; 005632f9
    XOR EAX,EAX                         ; 005632fc
    JMP 0x00563345                      ; 005632fe
        ;   XREF to: 00563345 (UNCONDITIONAL_JUMP)  ; LAB_00563345
    MOV dword ptr [EAX + 0xc],0x1       ; 00563300
        ;   Label: LAB_00563300
    MOV EDX,dword ptr [ESP + 0x30]      ; 00563307
        ;   Label: LAB_00563307
    MOV EAX,0x5632b0                    ; 0056330b
    PUSH EDX                            ; 00563310
    MOV ECX,dword ptr [ESP + 0x30]      ; 00563311
    MOV dword ptr [ESP + 0x8],EAX       ; 00563315
    PUSH ECX                            ; 00563319
    LEA EAX,[ESP + 0x8]                 ; 0056331a
    MOV EBP,0x563290                    ; 0056331e
    PUSH EAX                            ; 00563323
    MOV dword ptr [ESP + 0x14],EBX      ; 00563324
    MOV dword ptr [ESP + 0xc],EBP       ; 00563328
    CALL crt_unknown.c_FUN_00567560     ; 0056332c
        ;   XREF to: 00567560 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00567560()
    ADD ESP,0xc                         ; 00563331
    MOV EDI,dword ptr [EBX + 0x10]      ; 00563334
    PUSH EDI                            ; 00563337
    MOV ESI,EAX                         ; 00563338
    CALL dword ptr [0x005c1ac4]         ; 0056333a | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ac4
    ADD ESP,0x4                         ; 00563340
    MOV EAX,ESI                         ; 00563343
    ADD ESP,0x14                        ; 00563345
        ;   Label: LAB_00563345
    POP EBP                             ; 00563348
    POP EDI                             ; 00563349
    POP ESI                             ; 0056334a
    POP EBX                             ; 0056334b
    RET                                 ; 0056334c

