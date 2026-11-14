; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 crt_unknown_c_FUN_005cdaad(int *param_1)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined        Stack[-0xc]:1  local_c
;
; XREF[1]:
;   crt_unknown.c_FUN_005cbddd at 005cbeb4
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005ce114_00626b6c = 005ce114
;
; Called Functions:
;   crt_unknown.c_FUN_005c6460
;   crt_unknown.c_FUN_005c646c
;   crt_unknown.c_FUN_005cda60
;   crt_unknown.c_FUN_005ce114
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005cdaad
        ;   Label: crt_unknown.c_FUN_005cdaad
    MOV EBP,ESP                         ; 005cdaae
    PUSH EBX                            ; 005cdab0
    PUSH ESI                            ; 005cdab1
    SUB ESP,0x8                         ; 005cdab2
    MOV EBX,dword ptr [EBP + 0x8]       ; 005cdab5
    PUSH EBX                            ; 005cdab8
    CALL dword ptr [0x00626b6c]         ; 005cdab9 | PTR_crt_unknown.c_FUN_005ce114_00626b6c
    ADD ESP,0x4                         ; 005cdabf
    TEST EAX,EAX                        ; 005cdac2
    JNZ 0x005cdae8                      ; 005cdac4
        ;   XREF to: 005cdae8 (CONDITIONAL_JUMP)  ; LAB_005cdae8
    MOV EDX,dword ptr [EBX + 0x4]       ; 005cdac6
    PUSH EDX                            ; 005cdac9
    MOV ECX,dword ptr [EBX]             ; 005cdaca
    PUSH ECX                            ; 005cdacc
    CALL crt_unknown.c_FUN_005cda60     ; 005cdacd
        ;   XREF to: 005cda60 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005cda60()
    MOV ESI,dword ptr [EBX]             ; 005cdad2
    ADD ESP,0x8                         ; 005cdad4
    CMP ESI,0x1                         ; 005cdad7
    JNZ 0x005cdae3                      ; 005cdada
        ;   XREF to: 005cdae3 (CONDITIONAL_JUMP)  ; LAB_005cdae3
    CALL crt_unknown.c_FUN_005c6460     ; 005cdadc
        ;   XREF to: 005c6460 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c6460()
    JMP 0x005cdae8                      ; 005cdae1
        ;   XREF to: 005cdae8 (UNCONDITIONAL_JUMP)  ; LAB_005cdae8
    CALL crt_unknown.c_FUN_005c646c     ; 005cdae3
        ;   XREF to: 005c646c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c646c()
        ;   Label: LAB_005cdae3
    MOV EAX,dword ptr [EBX + 0x18]      ; 005cdae8
        ;   Label: LAB_005cdae8
    MOV dword ptr [EBP + -0x10],EAX     ; 005cdaeb
    MOV EAX,dword ptr [EBX + 0x1c]      ; 005cdaee
    MOV dword ptr [EBP + -0xc],EAX      ; 005cdaf1
    MOV EAX,dword ptr [EBP + -0x10]     ; 005cdaf4
    MOV EDX,dword ptr [EBP + -0xc]      ; 005cdaf7
    LEA ESP,[EBP + -0x8]                ; 005cdafa
    POP ESI                             ; 005cdafd
    POP EBX                             ; 005cdafe
    POP EBP                             ; 005cdaff
    RET                                 ; 005cdb00

