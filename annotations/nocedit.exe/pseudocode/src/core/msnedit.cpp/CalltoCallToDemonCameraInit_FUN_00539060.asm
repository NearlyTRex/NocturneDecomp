; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_msnedit.cpp_CalltoCallToDemonCameraInit_FUN_00539060()
;
;
; XREF[2]:
;   core_msnedit.cpp_FUN_005374b0 at 005374ef
;   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 at 0053aa25
;
; Referenced Globals:
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_set.cpp_CDemonSet_CallToDemonCameraInitAndSetView_FUN_0056b7e0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00539060
        ;   Label: core_msnedit.cpp_CalltoCallToDemonCameraInit_FUN_00539060
    MOV EDX,dword ptr [ESP + 0x8]       ; 00539064
    CMP EDX,dword ptr [EAX + 0x24]      ; 00539068
    JZ 0x005390b4                       ; 0053906b
        ;   XREF to: 005390b4 (CONDITIONAL_JUMP)  ; LAB_005390b4
    PUSH EDI                            ; 0053906d
    PUSH ESI                            ; 0053906e
    PUSH EBX                            ; 0053906f
    MOV dword ptr [EAX + 0x14],0x0      ; 00539070
    MOV dword ptr [EAX + 0x24],EDX      ; 00539077
    MOV EBX,dword ptr [EAX + 0x24]      ; 0053907a
    MOV dword ptr [EAX + 0x18],0x0      ; 0053907d
    TEST EBX,EBX                        ; 00539084
    JNZ 0x005390b5                      ; 00539086
        ;   XREF to: 005390b5 (CONDITIONAL_JUMP)  ; LAB_005390b5
    MOV EDX,dword ptr [0x00679394]      ; 00539088 | g_WindowWidth
    MOV dword ptr [EAX + 0x1c],EDX      ; 0053908e
    MOV EDX,dword ptr [0x00679398]      ; 00539091 | g_WindowHeight
    MOV dword ptr [EAX + 0x20],EDX      ; 00539097
    MOV ESI,dword ptr [EAX + 0x20]      ; 0053909a
        ;   Label: LAB_0053909a
    PUSH ESI                            ; 0053909d
    PUSH 0x0                            ; 0053909e
    PUSH 0x0                            ; 005390a0
    MOV EDI,dword ptr [0x006810c8]      ; 005390a2 | g_CDemonSetPtr
    PUSH EDI                            ; 005390a8 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_CallToDemonCameraInitAndSetView_FUN_0056b7e0 ; 005390a9
        ;   XREF to: 0056b7e0 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_CDemonSet_CallToDemonCameraInitAndSetView_FUN_0056b7e0()
    ADD ESP,0x10                        ; 005390ae
    POP EBX                             ; 005390b1
    POP ESI                             ; 005390b2
    POP EDI                             ; 005390b3
    RET                                 ; 005390b4
        ;   Label: LAB_005390b4
    MOV dword ptr [EAX + 0x20],0xf0     ; 005390b5
        ;   Label: LAB_005390b5
    MOV dword ptr [EAX + 0x1c],0x140    ; 005390bc
    JMP 0x0053909a                      ; 005390c3
        ;   XREF to: 0053909a (UNCONDITIONAL_JUMP)  ; LAB_0053909a

