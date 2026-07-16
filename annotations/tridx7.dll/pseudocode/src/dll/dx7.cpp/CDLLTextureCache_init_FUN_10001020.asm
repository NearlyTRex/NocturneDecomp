; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __ecxcall dll_dx7_cpp_CDLLTextureCache_init_FUN_10001020(CDLLTextureCache *this_ptr,int max_count,int texture_size)
;
; Parameters:
; int              Stack[0x4]:4   max_count
; int              Stack[0x8]:4   texture_size
;
; XREF[1]:
;   dll_dx7.cpp_FUN_10001200 at 1000141f
;
; Called Functions:
;   dll_dx7.cpp_createTexture_FUN_10002f60
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 10001020
        ;   Label: dll_dx7.cpp_CDLLTextureCache_init_FUN_10001020
    PUSH EBX                            ; 10001024
    PUSH ESI                            ; 10001025
    PUSH EDI                            ; 10001026
    LEA EBX,[ECX + 0x10]                ; 10001027
    MOV dword ptr [ECX],EAX             ; 1000102a
    MOV ESI,ECX                         ; 1000102c
    MOV EDI,EBX                         ; 1000102e
    MOV ECX,dword ptr [ESP + 0x14]      ; 10001030
    XOR EAX,EAX                         ; 10001034
    MOV dword ptr [ESI + 0x4],ECX       ; 10001036
    MOV ECX,0x12000                     ; 10001039
    STOSD.REP ES:EDI                    ; 1000103e
    XOR EDI,EDI                         ; 10001040
    MOV dword ptr [ESI + 0x8],EDI       ; 10001042
    MOV dword ptr [ESI + 0xc],EDI       ; 10001045
    CMP dword ptr [ESI],EDI             ; 10001048
    JLE 0x1000106f                      ; 1000104a
        ;   XREF to: 1000106f (CONDITIONAL_JUMP)  ; LAB_1000106f
    MOV EAX,dword ptr [ESI + 0x4]       ; 1000104c
        ;   Label: LAB_1000104c
    PUSH EAX                            ; 1000104f
    CALL dll_dx7.cpp_createTexture_FUN_10002f60 ; 10001050
        ;   XREF to: 10002f60 (UNCONDITIONAL_CALL)  ; int dll_dx7.cpp_createTexture_FUN_10002f60(int texture_size)
    ADD ESP,0x4                         ; 10001055
    CMP EAX,-0x1                        ; 10001058
    JZ 0x1000106d                       ; 1000105b
        ;   XREF to: 1000106d (CONDITIONAL_JUMP)  ; LAB_1000106d
    MOV dword ptr [EBX],EAX             ; 1000105d
    ADD EBX,0x48                        ; 1000105f
    INC EDI                             ; 10001062
    CMP dword ptr [ESI],EDI             ; 10001063
    JG 0x1000104c                       ; 10001065
        ;   XREF to: 1000104c (CONDITIONAL_JUMP)  ; LAB_1000104c
    POP EDI                             ; 10001067
    POP ESI                             ; 10001068
    POP EBX                             ; 10001069
    RET 0x8                             ; 1000106a
    MOV dword ptr [ESI],EDI             ; 1000106d
        ;   Label: LAB_1000106d
    POP EDI                             ; 1000106f
        ;   Label: LAB_1000106f
    POP ESI                             ; 10001070
    POP EBX                             ; 10001071
    RET 0x8                             ; 10001072

