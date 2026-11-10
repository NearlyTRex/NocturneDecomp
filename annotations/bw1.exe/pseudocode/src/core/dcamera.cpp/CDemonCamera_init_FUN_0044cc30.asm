; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_init_FUN_0044cc30(CDemonCamera *this_ptr,int screen_height)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   screen_height
;
; XREF[3]:
;   core_dcamera.cpp_CDemonCamera_initLookupTable_FUN_0044cb60 at 0044cb8a
;   core_game.cpp_CGame_setGameRes_FUN_004cf430 at 004cf4cd
;   core_set.cpp_CDemonSet_reinitCamera_FUN_0054fbf0 at 0054fbfa
;
; Referenced Globals:
;   TerminatedCString s_core_dcamera_cpp_005d751f
;   TerminatedCString s_CDemonCamera_init_Unable_005d7533
;   TerminatedCString s_core_dcamera_cpp_005d7565
;   TerminatedCString s_CDemonCamera_init_Unable_005d7579
;   undefined4 DAT_01323d00
;   undefined4 DAT_01481e4c
;   undefined4 DAT_01481e50
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_free_FUN_0044cdf0
;   core_main.c_FUN_005030e0
;   crt_unknown.c_FUN_005c08d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044cc30
        ;   Label: core_dcamera.cpp_CDemonCamera_init_FUN_0044cc30
    PUSH ESI                            ; 0044cc31
    PUSH EBP                            ; 0044cc32
    MOV EBX,dword ptr [ESP + 0x10]      ; 0044cc33
    MOV ESI,dword ptr [ESP + 0x14]      ; 0044cc37
    PUSH EBX                            ; 0044cc3b
    CALL core_dcamera.cpp_CDemonCamera_free_FUN_0044cdf0 ; 0044cc3c
        ;   XREF to: 0044cdf0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_free_FUN_0044cdf0(CDemonCamera * this_ptr)
    LEA EDX,[ESI*0x4 + 0x0]             ; 0044cc41
    MOV ECX,0x3                         ; 0044cc48
    MOV EAX,EDX                         ; 0044cc4d
    SAR EDX,0x1f                        ; 0044cc4f
    IDIV ECX                            ; 0044cc52
    ADD ESP,0x4                         ; 0044cc54
    MOV dword ptr [0x01481e50],ESI      ; 0044cc57 | DAT_01481e50
    MOV [0x01481e4c],EAX                ; 0044cc5d | DAT_01481e4c
    CMP ESI,0x1e0                       ; 0044cc62
    JLE 0x0044cc6f                      ; 0044cc68
        ;   XREF to: 0044cc6f (CONDITIONAL_JUMP)  ; LAB_0044cc6f
    MOV ESI,0x1e0                       ; 0044cc6a
    MOV dword ptr [EBX + 0x148],ESI     ; 0044cc6f
        ;   Label: LAB_0044cc6f
    LEA EDX,[ESI*0x4 + 0x0]             ; 0044cc75
    MOV ECX,0x3                         ; 0044cc7c
    MOV EAX,EDX                         ; 0044cc81
    SAR EDX,0x1f                        ; 0044cc83
    IDIV ECX                            ; 0044cc86
    MOV dword ptr [EBX + 0x14c],0x1     ; 0044cc88
    MOV dword ptr [EBX + 0x144],EAX     ; 0044cc92
    MOV EAX,dword ptr [EBX + 0x144]     ; 0044cc98
    XOR EDX,EDX                         ; 0044cc9e
    MOV dword ptr [EBX + 0x150],EAX     ; 0044cca0
    MOV dword ptr [0x01323d00],EDX      ; 0044cca6 | DAT_01323d00
    MOV EAX,dword ptr [EBX + 0x148]     ; 0044ccac
    MOV ECX,dword ptr [EBX + 0x150]     ; 0044ccb2
    MOV dword ptr [EBX + 0x154],EAX     ; 0044ccb8
    CMP ECX,0x140                       ; 0044ccbe
    JLE 0x0044cd1c                      ; 0044ccc4
        ;   XREF to: 0044cd1c (CONDITIONAL_JUMP)  ; LAB_0044cd1c
    PUSH EDI                            ; 0044ccc6
    MOV ECX,0x2                         ; 0044ccc7
    MOV EAX,dword ptr [EBX + 0x150]     ; 0044cccc
        ;   Label: LAB_0044cccc
    MOV EDX,EAX                         ; 0044ccd2
    SAR EDX,0x1f                        ; 0044ccd4
    IDIV ECX                            ; 0044ccd7
    MOV dword ptr [EBX + 0x150],EAX     ; 0044ccd9
    MOV EAX,dword ptr [EBX + 0x154]     ; 0044ccdf
    MOV EDX,EAX                         ; 0044cce5
    SAR EDX,0x1f                        ; 0044cce7
    IDIV ECX                            ; 0044ccea
    MOV ESI,dword ptr [EBX + 0x14c]     ; 0044ccec
    MOV EDI,dword ptr [0x01323d00]      ; 0044ccf2 | DAT_01323d00
    ADD ESI,ESI                         ; 0044ccf8
    INC EDI                             ; 0044ccfa
    MOV dword ptr [EBX + 0x14c],ESI     ; 0044ccfb
    MOV dword ptr [0x01323d00],EDI      ; 0044cd01 | DAT_01323d00
    MOV EBP,dword ptr [EBX + 0x150]     ; 0044cd07
    MOV dword ptr [EBX + 0x154],EAX     ; 0044cd0d
    CMP EBP,0x140                       ; 0044cd13
    JG 0x0044cccc                       ; 0044cd19
        ;   XREF to: 0044cccc (CONDITIONAL_JUMP)  ; LAB_0044cccc
    POP EDI                             ; 0044cd1b
    MOV EDX,dword ptr [EBX + 0x144]     ; 0044cd1c
        ;   Label: LAB_0044cd1c
    IMUL EDX,dword ptr [EBX + 0x148]    ; 0044cd22
    LEA EAX,[EDX*0x4 + 0x0]             ; 0044cd29
    ADD EAX,0x1010                      ; 0044cd30
    PUSH EAX                            ; 0044cd35
    CALL crt_unknown.c_FUN_005c08d0     ; 0044cd36
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005c08d0(ulong size)
    ADD ESP,0x4                         ; 0044cd3b
    MOV dword ptr [EBX + 0x160],EAX     ; 0044cd3e
    TEST EAX,EAX                        ; 0044cd44
    JNZ 0x0044cd6b                      ; 0044cd46
        ;   XREF to: 0044cd6b (CONDITIONAL_JUMP)  ; LAB_0044cd6b
    MOV ECX,0x5d751f                    ; 0044cd48 | = "..\\core\\dcamera.cpp"
    MOV ESI,0x24a                       ; 0044cd4d
    PUSH 0x5d7533                       ; 0044cd52 | = "CDemonCamera::init - Unable to alloc ..."
    MOV dword ptr [0x01d1d400],ECX      ; 0044cd57 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 0044cd5d | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0044cd63
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0044cd68
    MOV EDX,dword ptr [EBX + 0x144]     ; 0044cd6b
        ;   Label: LAB_0044cd6b
    IMUL EDX,dword ptr [EBX + 0x148]    ; 0044cd71
    LEA EAX,[EDX*0x4 + 0x0]             ; 0044cd78
    ADD EAX,0x1010                      ; 0044cd7f
    PUSH EAX                            ; 0044cd84
    CALL crt_unknown.c_FUN_005c08d0     ; 0044cd85
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005c08d0(ulong size)
    ADD ESP,0x4                         ; 0044cd8a
    MOV dword ptr [EBX + 0x164],EAX     ; 0044cd8d
    TEST EAX,EAX                        ; 0044cd93
    JZ 0x0044cdbd                       ; 0044cd95
        ;   XREF to: 0044cdbd (CONDITIONAL_JUMP)  ; LAB_0044cdbd
    MOV EAX,dword ptr [EBX + 0x160]     ; 0044cd97
        ;   Label: LAB_0044cd97
    ADD EAX,0x10                        ; 0044cd9d
    AND AL,0xf0                         ; 0044cda0
    MOV dword ptr [EBX + 0x158],EAX     ; 0044cda2
    MOV EAX,dword ptr [EBX + 0x164]     ; 0044cda8
    ADD EAX,0x10                        ; 0044cdae
    AND AL,0xf0                         ; 0044cdb1
    MOV dword ptr [EBX + 0x15c],EAX     ; 0044cdb3
    POP EBP                             ; 0044cdb9
    POP ESI                             ; 0044cdba
    POP EBX                             ; 0044cdbb
    RET                                 ; 0044cdbc
    MOV EAX,0x5d7565                    ; 0044cdbd | = "..\\core\\dcamera.cpp"
        ;   Label: LAB_0044cdbd
    MOV EDX,0x24f                       ; 0044cdc2
    PUSH 0x5d7579                       ; 0044cdc7 | = "CDemonCamera::init - Unable to alloc ..."
    MOV [0x01d1d400],EAX                ; 0044cdcc | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 0044cdd1 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0044cdd7
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0044cddc
    JMP 0x0044cd97                      ; 0044cddf
        ;   XREF to: 0044cd97 (UNCONDITIONAL_JUMP)  ; LAB_0044cd97

