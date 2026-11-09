; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_load_FUN_00537db0(CPackedBitmap *this_ptr,uchar *bitmap_data,int width,int height,int transparency_color,int row_stride)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
; uchar *          Stack[0x8]:4   bitmap_data
; int              Stack[0xc]:4   width
; int              Stack[0x10]:4   height
; int              Stack[0x14]:4   transparency_color
; int              Stack[0x18]:4   row_stride
;
; XREF[2]:
;   cockpit_pkbitmap.cpp_FUN_00537c30 at 00537c76
;   cockpit_pkbmpset.cpp_FUN_00538b2e at 00538cfd
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   cockpit_pkbitmap.cpp_FUN_00537550
;   core_main.c_FUN_005030e0
;   crt_memory.c_realloc_FUN_005c10d0
;   crt_unknown.c_FUN_005bfb40
;   crt_unknown.c_FUN_005c1268
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00537db0
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_00537db0
    PUSH ESI                            ; 00537db1
    PUSH EDI                            ; 00537db2
    PUSH EBP                            ; 00537db3
    SUB ESP,0x144                       ; 00537db4
    MOV EBP,dword ptr [ESP + 0x158]     ; 00537dba
    PUSH EBP                            ; 00537dc1
    CALL cockpit_pkbitmap.cpp_FUN_00537550 ; 00537dc2
        ;   XREF to: 00537550 (UNCONDITIONAL_CALL)  ; undefined cockpit_pkbitmap.cpp_FUN_00537550()
    ADD ESP,0x4                         ; 00537dc7
    MOV EAX,dword ptr [ESP + 0x160]     ; 00537dca
    MOV dword ptr [EBP + 0x18],EAX      ; 00537dd1
    MOV EAX,dword ptr [ESP + 0x164]     ; 00537dd4
    MOV EDX,dword ptr [ESP + 0x16c]     ; 00537ddb
    MOV dword ptr [EBP + 0x1c],EAX      ; 00537de2
    TEST EDX,EDX                        ; 00537de5
    JNZ 0x00537df3                      ; 00537de7
        ;   XREF to: 00537df3 (CONDITIONAL_JUMP)  ; LAB_00537df3
    MOV EAX,dword ptr [EBP + 0x18]      ; 00537de9
    MOV dword ptr [ESP + 0x16c],EAX     ; 00537dec
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00537df3
        ;   Label: LAB_00537df3
    INC EAX                             ; 00537df6
    SHL EAX,0x2                         ; 00537df7
    PUSH EAX                            ; 00537dfa
    CALL crt_unknown.c_FUN_005c1268     ; 00537dfb
        ;   XREF to: 005c1268 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c1268()
    ADD ESP,0x4                         ; 00537e00
    MOV dword ptr [EBP + 0x20],EAX      ; 00537e03
    TEST EAX,EAX                        ; 00537e06
    JZ 0x00537fad                       ; 00537e08
        ;   XREF to: 00537fad (CONDITIONAL_JUMP)  ; LAB_00537fad
    MOV EAX,dword ptr [ESP + 0x15c]     ; 00537e0e
        ;   Label: LAB_00537e0e
    XOR EDI,EDI                         ; 00537e15
    XOR ESI,ESI                         ; 00537e17
    MOV dword ptr [ESP + 0x130],EDI     ; 00537e19
    MOV dword ptr [ESP + 0x140],EAX     ; 00537e20
    MOV dword ptr [ESP + 0x12c],EDI     ; 00537e27
    MOV dword ptr [ESP + 0x13c],EDI     ; 00537e2e
    MOV ECX,dword ptr [ESP + 0x12c]     ; 00537e35
        ;   Label: LAB_00537e35
    MOV EAX,dword ptr [EBP + 0x20]      ; 00537e3c
    ADD EAX,ECX                         ; 00537e3f
    MOV dword ptr [EAX],ESI             ; 00537e41
    MOV EAX,dword ptr [ESP + 0x130]     ; 00537e43
    CMP EAX,dword ptr [EBP + 0x1c]      ; 00537e4a
    JGE 0x00537fd8                      ; 00537e4d
        ;   XREF to: 00537fd8 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [EBP + 0x18]      ; 00537e53
    XOR EBX,EBX                         ; 00537e56
    TEST EDI,EDI                        ; 00537e58
    JLE 0x00537f71                      ; 00537e5a
        ;   XREF to: 00537f71 (CONDITIONAL_JUMP)  ; LAB_00537f71
    MOV EAX,dword ptr [ESP + 0x140]     ; 00537e60
        ;   Label: LAB_00537e60
    ADD EAX,EBX                         ; 00537e67
    XOR EDX,EDX                         ; 00537e69
    MOV EDI,dword ptr [ESP + 0x168]     ; 00537e6b
    MOV DL,byte ptr [EAX]               ; 00537e72
    CMP EDX,EDI                         ; 00537e74
    JZ 0x00537fd5                       ; 00537e76
        ;   XREF to: 00537fd5 (CONDITIONAL_JUMP)  ; LAB_00537fd5
    MOV ECX,dword ptr [ESP + 0x168]     ; 00537e7c
    MOV dword ptr [ESP + 0x134],EBX     ; 00537e83
    INC EBX                             ; 00537e8a
        ;   Label: LAB_00537e8a
    MOV EDX,dword ptr [EBP + 0x18]      ; 00537e8b
    INC EAX                             ; 00537e8e
    CMP EBX,EDX                         ; 00537e8f
    JGE 0x00537e9b                      ; 00537e91
        ;   XREF to: 00537e9b (CONDITIONAL_JUMP)  ; LAB_00537e9b
    XOR EDX,EDX                         ; 00537e93
    MOV DL,byte ptr [EAX]               ; 00537e95
    CMP EDX,ECX                         ; 00537e97
    JNZ 0x00537e8a                      ; 00537e99
        ;   XREF to: 00537e8a (CONDITIONAL_JUMP)  ; LAB_00537e8a
    MOV EAX,dword ptr [ESP + 0x134]     ; 00537e9b
        ;   Label: LAB_00537e9b
    MOV EDI,EBX                         ; 00537ea2
    SUB EDI,EAX                         ; 00537ea4
    LEA EAX,[EDI + 0x3]                 ; 00537ea6
    AND AL,0xfc                         ; 00537ea9
    ADD EAX,ESI                         ; 00537eab
    ADD EAX,0x4                         ; 00537ead
    MOV EDX,dword ptr [ESP + 0x13c]     ; 00537eb0
    MOV dword ptr [ESP + 0x138],EAX     ; 00537eb7
    CMP EAX,EDX                         ; 00537ebe
    JLE 0x00537f26                      ; 00537ec0
        ;   XREF to: 00537f26 (CONDITIONAL_JUMP)  ; LAB_00537f26
    ADD EAX,0x4000                      ; 00537ec2
    PUSH EAX                            ; 00537ec7
    MOV dword ptr [ESP + 0x140],EAX     ; 00537ec8
    MOV EAX,dword ptr [EBP + 0x14]      ; 00537ecf
    PUSH EAX                            ; 00537ed2
    CALL crt_memory.c_realloc_FUN_005c10d0 ; 00537ed3
        ;   XREF to: 005c10d0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005c10d0(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 00537ed8
    MOV dword ptr [EBP + 0x14],EAX      ; 00537edb
    TEST EAX,EAX                        ; 00537ede
    JNZ 0x00537f26                      ; 00537ee0
        ;   XREF to: 00537f26 (CONDITIONAL_JUMP)  ; LAB_00537f26
    MOV ECX,dword ptr [ESP + 0x13c]     ; 00537ee2
    PUSH ECX                            ; 00537ee9
    MOV EAX,dword ptr [ESP + 0x134]     ; 00537eea
    PUSH EAX                            ; 00537ef1
    PUSH EBP                            ; 00537ef2
    PUSH 0x5ece43                       ; 00537ef3
    LEA EAX,[ESP + 0x10]                ; 00537ef8
    PUSH EAX                            ; 00537efc
    CALL crt_unknown.c_FUN_005bfb40     ; 00537efd
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    MOV EDX,0x5ece84                    ; 00537f02
    ADD ESP,0x14                        ; 00537f07
    MOV EAX,ESP                         ; 00537f0a
    MOV ECX,0x3b6                       ; 00537f0c
    PUSH EAX                            ; 00537f11
    MOV dword ptr [0x01d1d400],EDX      ; 00537f12 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 00537f18 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00537f1e
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00537f23
    MOV EAX,dword ptr [EBP + 0x14]      ; 00537f26
        ;   Label: LAB_00537f26
    ADD EAX,ESI                         ; 00537f29
    MOV ECX,dword ptr [ESP + 0x134]     ; 00537f2b
    MOV word ptr [EAX],CX               ; 00537f32
    XOR ESI,ESI                         ; 00537f35
    MOV word ptr [EAX + 0x2],DI         ; 00537f37
    XOR ECX,ECX                         ; 00537f3b
    MOV SI,word ptr [EAX]               ; 00537f3d
    MOV CX,DI                           ; 00537f40
    MOV EDI,dword ptr [ESP + 0x140]     ; 00537f43
    LEA EDX,[EAX + 0x4]                 ; 00537f4a
    ADD ESI,EDI                         ; 00537f4d
    MOV EDI,EDX                         ; 00537f4f
    PUSH EDI                            ; 00537f51
    MOV EAX,ECX                         ; 00537f52
    SHR ECX,0x2                         ; 00537f54
    MOVSD.REP ES:EDI,ESI                ; 00537f57
    MOV CL,AL                           ; 00537f59
    AND CL,0x3                          ; 00537f5b
    MOVSB.REP ES:EDI,ESI                ; 00537f5e
    POP EDI                             ; 00537f60
    MOV ESI,dword ptr [ESP + 0x138]     ; 00537f61
    CMP EBX,dword ptr [EBP + 0x18]      ; 00537f68
        ;   Label: LAB_00537f68
    JL 0x00537e60                       ; 00537f6b
        ;   XREF to: 00537e60 (CONDITIONAL_JUMP)  ; LAB_00537e60
    MOV ECX,dword ptr [ESP + 0x130]     ; 00537f71
        ;   Label: LAB_00537f71
    MOV EDX,dword ptr [ESP + 0x12c]     ; 00537f78
    MOV EAX,dword ptr [ESP + 0x16c]     ; 00537f7f
    MOV EBX,dword ptr [ESP + 0x140]     ; 00537f86
    INC ECX                             ; 00537f8d
    ADD EDX,0x4                         ; 00537f8e
    ADD EBX,EAX                         ; 00537f91
    MOV dword ptr [ESP + 0x130],ECX     ; 00537f93
    MOV dword ptr [ESP + 0x140],EBX     ; 00537f9a
    MOV dword ptr [ESP + 0x12c],EDX     ; 00537fa1
    JMP 0x00537e35                      ; 00537fa8
        ;   XREF to: 00537e35 (UNCONDITIONAL_JUMP)  ; LAB_00537e35
    MOV EBX,0x5ecde6                    ; 00537fad
        ;   Label: LAB_00537fad
    MOV ESI,0x37e                       ; 00537fb2
    PUSH 0x5ecdfe                       ; 00537fb7
    MOV dword ptr [0x01d1d400],EBX      ; 00537fbc | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 00537fc2 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00537fc8
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00537fcd
    JMP 0x00537e0e                      ; 00537fd0
        ;   XREF to: 00537e0e (UNCONDITIONAL_JUMP)  ; LAB_00537e0e
    INC EBX                             ; 00537fd5
        ;   Label: LAB_00537fd5
    JMP 0x00537f68                      ; 00537fd6
        ;   XREF to: 00537f68 (UNCONDITIONAL_JUMP)  ; LAB_00537f68

