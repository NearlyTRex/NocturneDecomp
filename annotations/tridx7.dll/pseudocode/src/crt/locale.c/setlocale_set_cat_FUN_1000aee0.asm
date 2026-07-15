; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl crt_locale_c_setlocale_set_cat_FUN_1000aee0(int category,char *locale)
;
; Parameters:
; int              Stack[0x4]:4   category
; char *           Stack[0x8]:4   locale
; Local Variables:
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined2       Stack[-0x9c]:2  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined2       Stack[-0x88]:2  local_88
; undefined        Stack[-0x84]:1  local_84
;
; XREF[1]:
;   crt_locale.c_setlocale_FUN_1000ac10 at 1000ac70
;
; Referenced Globals:
;   undefined4 DAT_10017758
;   undefined4 DAT_10017770
;   undefined1 DAT_10017788
;   undefined4 DAT_10017794
;   undefined1* PTR_LAB_10017798 = 1000b320
;   undefined4 DAT_10017940
;   undefined4 DAT_10017944
;
; Called Functions:
;   crt_heap.c_free_FUN_10005b30
;   crt_heap.c_malloc_FUN_10008830
;   crt_locale.c__expandlocale_FUN_1000b150
;
; *****************************************************************************

section .text

    SUB ESP,0xa8                        ; 1000aee0
        ;   Label: crt_locale.c_setlocale_set_cat_FUN_1000aee0
    LEA EAX,[ESP + 0x10]                ; 1000aee6
    PUSH EBX                            ; 1000aeea
    MOV EBX,dword ptr [ESP + 0xb0]      ; 1000aeeb
    PUSH ESI                            ; 1000aef2
    LEA ECX,[ESP + 0x10]                ; 1000aef3
    PUSH EDI                            ; 1000aef7
    LEA EDX,[ESP + 0x30]                ; 1000aef8
    PUSH EBP                            ; 1000aefc
    PUSH EBX                            ; 1000aefd
    PUSH EAX                            ; 1000aefe
    MOV EAX,dword ptr [ESP + 0xc8]      ; 1000aeff
    PUSH ECX                            ; 1000af06
    PUSH EDX                            ; 1000af07
    PUSH EAX                            ; 1000af08
    CALL crt_locale.c__expandlocale_FUN_1000b150 ; 1000af09
        ;   XREF to: 1000b150 (UNCONDITIONAL_CALL)  ; int crt_locale.c__expandlocale_FUN_1000b150(char * locale, char * cat, LC_ID * lc_id, UINT * code_page)
    ADD ESP,0x14                        ; 1000af0e
    TEST EAX,EAX                        ; 1000af11
    JNZ 0x1000af22                      ; 1000af13
        ;   XREF to: 1000af22 (CONDITIONAL_JUMP)  ; LAB_1000af22
    XOR EAX,EAX                         ; 1000af15
    POP EBP                             ; 1000af17
    POP EDI                             ; 1000af18
    POP ESI                             ; 1000af19
    POP EBX                             ; 1000af1a
    ADD ESP,0xa8                        ; 1000af1b
    RET                                 ; 1000af21
    LEA EDI,[ESP + 0x34]                ; 1000af22
        ;   Label: LAB_1000af22
    MOV ECX,0xffffffff                  ; 1000af26
    SUB EAX,EAX                         ; 1000af2b
    SCASB.REPNE ES:EDI                  ; 1000af2d
    NOT ECX                             ; 1000af2f
    PUSH ECX                            ; 1000af31
    CALL crt_heap.c_malloc_FUN_10008830 ; 1000af32
        ;   XREF to: 10008830 (UNCONDITIONAL_CALL)  ; void * crt_heap.c_malloc_FUN_10008830(size_t size)
    MOV dword ptr [ESP + 0x14],EAX      ; 1000af37
    ADD ESP,0x4                         ; 1000af3b
    TEST EAX,EAX                        ; 1000af3e
    JNZ 0x1000af4f                      ; 1000af40
        ;   XREF to: 1000af4f (CONDITIONAL_JUMP)  ; LAB_1000af4f
    XOR EAX,EAX                         ; 1000af42
    POP EBP                             ; 1000af44
    POP EDI                             ; 1000af45
    POP ESI                             ; 1000af46
    POP EBX                             ; 1000af47
    ADD ESP,0xa8                        ; 1000af48
    RET                                 ; 1000af4e
    LEA EAX,[EBX + EBX*0x2]             ; 1000af4f
        ;   Label: LAB_1000af4f
    MOV ECX,dword ptr [EAX*0x4 + 0x10017794] ; 1000af52 | DAT_10017794
    LEA EBP,[EAX*0x4 + 0x0]             ; 1000af59
    MOV EAX,dword ptr [EBX*0x4 + 0x10017758] ; 1000af60 | DAT_10017758
    MOV dword ptr [ESP + 0x14],ECX      ; 1000af67
    LEA ECX,[EBX + EBX*0x2]             ; 1000af6b
    MOV dword ptr [ESP + 0x24],EAX      ; 1000af6e
    LEA EDX,[ECX*0x2 + 0x10017940]      ; 1000af72 | DAT_10017940
    LEA ECX,[ESP + 0x2c]                ; 1000af79
    LEA EDI,[ESP + 0x34]                ; 1000af7d
    MOV EAX,dword ptr [EDX]             ; 1000af81 | DAT_10017940
    MOV dword ptr [ECX],EAX             ; 1000af83
    MOV AX,word ptr [EDX + 0x4]         ; 1000af85 | DAT_10017944
    MOV word ptr [ECX + 0x4],AX         ; 1000af89
    MOV ECX,dword ptr [0x10017770]      ; 1000af8d | DAT_10017770
    SUB EAX,EAX                         ; 1000af93
    MOV dword ptr [ESP + 0x28],ECX      ; 1000af95
    MOV ECX,0xffffffff                  ; 1000af99
    SCASB.REPNE ES:EDI                  ; 1000af9e
    NOT ECX                             ; 1000afa0
    SUB EDI,ECX                         ; 1000afa2
    MOV EAX,ECX                         ; 1000afa4
    SHR ECX,0x2                         ; 1000afa6
    MOV ESI,EDI                         ; 1000afa9
    MOV EDI,dword ptr [ESP + 0x10]      ; 1000afab
    MOVSD.REP ES:EDI,ESI                ; 1000afaf
    MOV ECX,EAX                         ; 1000afb1
    AND ECX,0x3                         ; 1000afb3
    MOVSB.REP ES:EDI,ESI                ; 1000afb6
    MOV ECX,dword ptr [ESP + 0x10]      ; 1000afb8
    MOV EAX,dword ptr [ESP + 0x18]      ; 1000afbc
    AND EAX,0xffff                      ; 1000afc0
    MOV dword ptr [EBP + 0x10017794],ECX ; 1000afc5 | DAT_10017794
    MOV dword ptr [EBX*0x4 + 0x10017758],EAX ; 1000afcb | DAT_10017758
    CMP EBX,0x2                         ; 1000afd2
    LEA EAX,[ESP + 0x18]                ; 1000afd5
    MOV ECX,dword ptr [EAX]             ; 1000afd9
    MOV AX,word ptr [EAX + 0x4]         ; 1000afdb
    MOV dword ptr [EDX],ECX             ; 1000afdf | DAT_10017940
    MOV word ptr [EDX + 0x4],AX         ; 1000afe1 | DAT_10017944
    JNZ 0x1000aff0                      ; 1000afe5
        ;   XREF to: 1000aff0 (CONDITIONAL_JUMP)  ; LAB_1000aff0
    MOV EAX,dword ptr [ESP + 0x20]      ; 1000afe7
    MOV [0x10017770],EAX                ; 1000afeb | DAT_10017770
    CALL dword ptr [EBP + 0x10017798]   ; 1000aff0 | PTR_LAB_10017798
        ;   Label: LAB_1000aff0
    TEST EAX,EAX                        ; 1000aff6
    JZ 0x1000b033                       ; 1000aff8
        ;   XREF to: 1000b033 (CONDITIONAL_JUMP)  ; LAB_1000b033
    MOV EAX,dword ptr [ESP + 0x14]      ; 1000affa
    MOV ECX,dword ptr [ESP + 0x10]      ; 1000affe
    PUSH ECX                            ; 1000b002
    MOV dword ptr [EBP + 0x10017794],EAX ; 1000b003 | DAT_10017794
    CALL crt_heap.c_free_FUN_10005b30   ; 1000b009
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    MOV ECX,dword ptr [ESP + 0x28]      ; 1000b00e
    MOV EDX,dword ptr [ESP + 0x2c]      ; 1000b012
    ADD ESP,0x4                         ; 1000b016
    XOR EAX,EAX                         ; 1000b019
    MOV dword ptr [EBX*0x4 + 0x10017758],ECX ; 1000b01b | DAT_10017758
    MOV dword ptr [0x10017770],EDX      ; 1000b022 | DAT_10017770
    POP EBP                             ; 1000b028
    POP EDI                             ; 1000b029
    POP ESI                             ; 1000b02a
    POP EBX                             ; 1000b02b
    ADD ESP,0xa8                        ; 1000b02c
    RET                                 ; 1000b032
    CMP dword ptr [ESP + 0x14],0x10017788 ; 1000b033 | DAT_10017788
        ;   Label: LAB_1000b033
    JZ 0x1000b04a                       ; 1000b03b
        ;   XREF to: 1000b04a (CONDITIONAL_JUMP)  ; LAB_1000b04a
    MOV EAX,dword ptr [ESP + 0x14]      ; 1000b03d
    PUSH EAX                            ; 1000b041
    CALL crt_heap.c_free_FUN_10005b30   ; 1000b042
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 1000b047
    MOV EAX,dword ptr [EBP + 0x10017794] ; 1000b04a | DAT_10017794
        ;   Label: LAB_1000b04a
    POP EBP                             ; 1000b050
    POP EDI                             ; 1000b051
    POP ESI                             ; 1000b052
    POP EBX                             ; 1000b053
    ADD ESP,0xa8                        ; 1000b054
    RET                                 ; 1000b05a

