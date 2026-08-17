; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl wincore_wddvmem_cpp_reinitializeDirectDraw_FUN_005528e0(void)
;
;
; Referenced Globals:
;   IDirectDraw* g_DirectDrawObject
;   IDirectDrawSurface* g_DirectDrawSurface
;   IDirectDrawSurface* g_SoftwareRenderSurface
;   IUnknown* g_DirectDrawUnknown
;   HWND g_HWND_02de2098
;
; Called Functions:
;   crt_ddraw.c_DirectDrawCreate
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005528e0
        ;   Label: wincore_wddvmem.cpp_reinitializeDirectDraw_FUN_005528e0
    PUSH EDI                            ; 005528e1
    PUSH EBP                            ; 005528e2
    MOV EDX,dword ptr [0x02ddf55c]      ; 005528e3 | g_DirectDrawUnknown
    TEST EDX,EDX                        ; 005528e9
    JNZ 0x00552959                      ; 005528eb
        ;   XREF to: 00552959 (CONDITIONAL_JUMP)  ; LAB_00552959
    MOV EBX,dword ptr [0x02ddf558]      ; 005528ed | g_SoftwareRenderSurface
        ;   Label: LAB_005528ed
    TEST EBX,EBX                        ; 005528f3
    JZ 0x00552907                       ; 005528f5
        ;   XREF to: 00552907 (CONDITIONAL_JUMP)  ; LAB_00552907
    PUSH ESI                            ; 005528f7
    PUSH EBX                            ; 005528f8
    MOV EDX,dword ptr [EBX]             ; 005528f9
    XOR ESI,ESI                         ; 005528fb
    CALL dword ptr [EDX + 0x8]          ; 005528fd
    MOV dword ptr [0x02ddf558],ESI      ; 00552900 | g_SoftwareRenderSurface
    POP ESI                             ; 00552906
    MOV EDI,dword ptr [0x02ddf554]      ; 00552907 | g_DirectDrawSurface
        ;   Label: LAB_00552907
    TEST EDI,EDI                        ; 0055290d
    JZ 0x0055291f                       ; 0055290f
        ;   XREF to: 0055291f (CONDITIONAL_JUMP)  ; LAB_0055291f
    PUSH EDI                            ; 00552911
    MOV EDX,dword ptr [EDI]             ; 00552912
    XOR EBP,EBP                         ; 00552914
    CALL dword ptr [EDX + 0x8]          ; 00552916
    MOV dword ptr [0x02ddf554],EBP      ; 00552919 | g_DirectDrawSurface
    MOV EAX,[0x02ddf550]                ; 0055291f | g_DirectDrawObject
        ;   Label: LAB_0055291f
    TEST EAX,EAX                        ; 00552924
    JZ 0x00552941                       ; 00552926
        ;   XREF to: 00552941 (CONDITIONAL_JUMP)  ; LAB_00552941
    PUSH EAX                            ; 00552928
    MOV EDX,dword ptr [EAX]             ; 00552929
    CALL dword ptr [EDX + 0x4c]         ; 0055292b
    MOV EAX,[0x02ddf550]                ; 0055292e | g_DirectDrawObject
    PUSH EAX                            ; 00552933
    MOV EDX,dword ptr [EAX]             ; 00552934
    CALL dword ptr [EDX + 0x8]          ; 00552936
    XOR EDX,EDX                         ; 00552939
    MOV dword ptr [0x02ddf550],EDX      ; 0055293b | g_DirectDrawObject
    PUSH 0x0                            ; 00552941
        ;   Label: LAB_00552941
    PUSH 0x2ddf550                      ; 00552943
    PUSH 0x0                            ; 00552948
    CALL crt_ddraw.c_DirectDrawCreate   ; 0055294a
        ;   XREF to: 00574ba8 (UNCONDITIONAL_CALL)  ; HRESULT crt_ddraw.c_DirectDrawCreate(GUID * lp_guid, LPDIRECTDRAW * lplp_dd, IUnknown * p_unk_outer)
    TEST EAX,EAX                        ; 0055294f
    JZ 0x0055296b                       ; 00552951
        ;   XREF to: 0055296b (CONDITIONAL_JUMP)  ; LAB_0055296b
    XOR EAX,EAX                         ; 00552953
        ;   Label: LAB_00552953
    POP EBP                             ; 00552955
    POP EDI                             ; 00552956
    POP EBX                             ; 00552957
    RET                                 ; 00552958
    MOV EAX,EDX                         ; 00552959
        ;   Label: LAB_00552959
    PUSH EAX                            ; 0055295b
    MOV EDX,dword ptr [EDX]             ; 0055295c
    CALL dword ptr [EDX + 0x8]          ; 0055295e
    XOR ECX,ECX                         ; 00552961
    MOV dword ptr [0x02ddf55c],ECX      ; 00552963 | g_DirectDrawUnknown
    JMP 0x005528ed                      ; 00552969
        ;   XREF to: 005528ed (UNCONDITIONAL_JUMP)  ; LAB_005528ed
    PUSH 0x11                           ; 0055296b
        ;   Label: LAB_0055296b
    MOV ECX,dword ptr [0x02de2098]      ; 0055296d | g_HWND_02de2098
    MOV EAX,[0x02ddf550]                ; 00552973 | g_DirectDrawObject
    PUSH ECX                            ; 00552978
    MOV EDX,dword ptr [EAX]             ; 00552979
    PUSH EAX                            ; 0055297b
    CALL dword ptr [EDX + 0x50]         ; 0055297c
    TEST EAX,EAX                        ; 0055297f
    JNZ 0x00552953                      ; 00552981
        ;   XREF to: 00552953 (CONDITIONAL_JUMP)  ; LAB_00552953
    MOV EAX,0x1                         ; 00552983
    POP EBP                             ; 00552988
    POP EDI                             ; 00552989
    POP EBX                             ; 0055298a
    RET                                 ; 0055298b

